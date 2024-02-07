void splitList(list<T> &list1, list<T> &list2)
{
    // Add your code here
    int n1 = (mSize + 1) / 2;
    int n2 = mSize - n1;
    if (n1 > 0)
    {
        list1.mHeader->prev->next = mHeader->next;
        mHeader->next->prev = list1.mHeader->prev;
        node *temp = mHeader->next;
        for(int i=0;i<n1;i++)
        {
            temp = temp->next;
        }
        temp->prev->next = list1.mHeader;
        list1.mHeader->prev = temp->prev;
        if (n2 > 0)
        {
            temp->prev = list2.mHeader->prev;
            list2.mHeader->prev->next = temp;
            mHeader->prev->next = list2.mHeader;
            list2.mHeader->prev = mHeader->prev;
        }
    }
    mHeader->prev = mHeader;
    mHeader->next = mHeader;
    mSize = 0;
    list1.mSize += n1;
    list2.mSize += n2;
}
