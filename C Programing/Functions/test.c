#include <stdio.h>

struct Vehicle
{
    char model[50];
    int year;
    float price;
};

void Vehicle_detail(char model[50], int year, float price)
{
    printf("Please enter vehicle's model: ");
    scanf("%s", &model);

    printf("Please enter year: ");
    scanf("%d", &year);

    printf("Please enter the price of the vehicle: ");
    scanf("%f", &price);
}

int main()
{
    struct Vehicle v[10];
    printf("Please enter the details of the vehicle: ");
    
    for(int i=0; i<10; i++)
    {
        Vehicle_detail(v[i].model, v[i].year, v[i].price);
    }

    //sorting

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<9; j++)
        {
            if(v[j+1].price > v[j].price)
            {
                float temp = v[j+1].price;
                char tempm = v[j+1].model;
                int tempy = v[j+1].year;
                v[j+1].price = v[j].price;
                v[j+1].model = v[j].model;
                v[j+1].year = v[j].year;
                v[j].price = temp;
                v[j].model = tempm;
                v[j].year = tempy;
            }
        }
    }
}