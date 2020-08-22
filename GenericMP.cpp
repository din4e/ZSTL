template <class T, int BLOCK_NUM= 50>
class GenericMP
{
public:
    static void *operator new(size_t allocLen)
    {
        assert(sizeof(T) == allocLen);
        if(!m_NewPointer)
        MyAlloc();
        uchar *rp = m_NewPointer;
        m_NewPointer = *reinterpret_cast<uchar** >(rp); //由于头4个字节被“强行”解释为指向下一内存块的指针，这里m_NewPointer就指向了下一个内存块，以备下次分配使用。
        return rp;
    }
    static void operator delete(void *dp)
    {
        *reinterpret_cast<uchar** >(dp) = m_NewPointer;
        m_NewPointer = static_cast<uchar*>(dp);
    }
private:
    static void MyAlloc()
    {
        m_NewPointer = new uchar[sizeof(T) * BLOCK_NUM];
        uchar **cur = reinterpret_cast<uchar** >(m_NewPointer); //强制转型为双指针，这将改变每个内存块头4个字节的含义。
        uchar *next = m_NewPointer;
        for(INT i = 0; i < BLOCK_NUM-1; i++)
        {
            next += sizeof(T);
            *cur = next;
            cur = reinterpret_cast<uchar** >(next); //这样，所分配的每个内存块的头4个字节就被“强行“解释为指向下一个内存块的指针， 即形成了内存块的链表结构。
        }
        *cur = 0;
    }
    static uchar *m_NewPointer;
protected:
    ~GenericMP()
    {
    }
};
template<class T, int BLOCK_NUM >
uchar *GenericMP<T, BLOCK_NUM >::m_NewPointer;
class ExpMP : public GenericMP<ExpMP>
{
    char a[1024];
};
int main(int argc, char* argv[])
{
    ExpMP *aMP = new ExpMP();
    delete aMP;
}