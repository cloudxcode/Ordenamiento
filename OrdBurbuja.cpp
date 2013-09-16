void ordBurbuja(int* Vec,int TOPE)
{
    int Temp;
    for(int i = 0;i < TOPE; i++)
        for(int j = 0;j < (TOPE-i); j++)
            if(Vec[j] > Vec[j+1])
            {
                Temp = Vec[j+1];
                Vec[j+1] = Vec[j];
                Vec[j] = Temp;
            }
}

void ordBurbujaModificado(int* Vec,int TOPE)
{
    int Temp;
    bool ord;
    for(int i = 0;i < TOPE; i++)
    {
        ord = true;
        for(int j = 0;j < (TOPE-i); j++)
            if(Vec[j] > Vec[j+1])
            {
                Temp = Vec[j+1];
                Vec[j+1] = Vec[j];
                Vec[j] = Temp;
                ord = false;
            }
        if(ord)
            break;
    }
}
