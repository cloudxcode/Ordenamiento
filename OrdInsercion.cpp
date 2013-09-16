void ordInserccion(int* Vec,int TOPE)
{
    int Temp,k; // k es posición del valor que se va transladar en el vector
    for(int i = 1;i < TOPE; i++)
    {
        Temp = Vec[i];
        k = i-1;
        while(k >= 0 && Temp < Vec[k])
        {
            Vec[k+1] = Vec[k];
            k--;
        }
        Vec[k+1] = Temp;
    }
}
