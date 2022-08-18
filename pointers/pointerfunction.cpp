class Data
{ 
    public:
    int f(float) 
    { 
        return 1; 
    }
};

int (Data::*fp1) (float) = &Data::f; 
int (Data::*fp2) (float);        

int main()
{
    fp2 = &Data::f;   
}
