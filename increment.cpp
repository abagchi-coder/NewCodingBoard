#include<stdio.h>
int main(){
    int years;
    float start_sal;
    float avg_prcnt;
    float new_sal;
    int cnt;
  
    printf("Enter years of Experience: ");
    scanf("%d",&years);
    printf("Enter Starting Salary: ");
    scanf("%f",&start_sal);
    
    new_sal = start_sal;
    for(cnt=1;cnt<=years;cnt++){
        printf("Enter avreage hike for year no- %d: ",cnt);
        scanf("%f",&avg_prcnt);
        
        new_sal = new_sal + new_sal*(avg_prcnt/100);
        
    }
    printf("The final salary is %f",new_sal);
    return 0;

}