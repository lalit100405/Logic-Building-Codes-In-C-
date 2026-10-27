int addition(int iFirstNumber,int iSecNumber)
{
    if(iFirstNumber<0)
    {
        iFirstNumber = -iFirstNumber;
    }
    if(iSecNumber<0)
    {
        iSecNumber = -iSecNumber;
    }
    return iFirstNumber+iSecNumber;
}