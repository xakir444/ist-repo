void main()
{
    int arr[10] = {22,33,5,6,11,8,99,89,444,5};
    int m=arr[0],sm=arr[0];
    for(int i=0;i<10;i++)
    {
        if(m<arr[i])
        {
            sm=m;
            m=arr[i];

        }
        else if(sm<arr[i] && m != arr[i])
        {
            sm=arr[i];

        }

    }
    printf("%d\n",sm);
    printf("%d",m);

    getch();
}
