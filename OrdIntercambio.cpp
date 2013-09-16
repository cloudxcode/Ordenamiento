void ordIntercambio(int* Vec,int TOPE)
{

    int Temp;
    for(int i = 0;i < TOPE-1; i++)
        for(int j = i+1;j < TOPE; j++)
            if(Vec[i] > Vec[j])
            {
                Temp = Vec[j];
                Vec[j] = Vec[i];
                Vec[i] = Temp;
            }
}
