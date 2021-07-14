def getNth(head, k):
    if k==1:
        return head.data
    return getNth(head.next,k-1)
