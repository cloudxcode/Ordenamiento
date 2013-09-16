void ordSeleccion(int* Vec,int TOPE)
{
    int m; // Captura la posición del menor valor en el vector
    int Temp;
    for(int i = 0;i < TOPE; i++)
    {
        m = i;
        for(int j = i+1;j < TOPE; j++)
        {
            if(Vec[j]<Vec[m])
                m = j;
        }
        Temp = Vec[m];
        Vec[m] = Vec[i];
        Vec[i] = Temp;
    }
}
