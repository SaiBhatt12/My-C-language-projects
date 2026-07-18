#include<stdio.h>

int main(){
    int section, regime, company;
    float income, tax, inat, ce, spt, income2;
    printf("\nTell me in which type of tax you want to calculate:1.'Individual', 2.'Corporate'.\n");
    printf("\nIf want to go to individual tax section the type 1 and if you want to go to corporate tax section then type 2.\n");
    scanf("%d", &section);

// This is been added to divide the calculater in two parts on for coporate tax and other for individual tax.

    if(section == 1){   
    printf("\nGive your yearly income:");
    scanf("%f", &income);

    // From here it will calculate the income tax of all the individuals as per the indian tax rules.
    //I have typed full names for some of the variables but for some i have used shortcuts which i thought would be easyer to work with.
    // The shortcuts are inat= interest after tax, ce= cess, spt= total tax deduated from the persons earnings.
    
    if(income <= 400000){
    printf("\"You don't have to pay tax on your income\"");
    }

    else if(income > 400000 && income <= 800000){
        tax = (income)*5/100;
        printf("\nThe tax you have to pay for this years income:\n%.2f\n", tax);
        inat = (income - tax);
        printf("\nThe amount you will be left with after paying taxes:\n%.2f\n", inat);
    }

    else if(income > 800000 && income <= 1200000){
        tax = (income)*10/100;
        printf("\nThe tax you have to pay for this yaers income:\n%.2f\n", tax);
        inat = (income - tax);
        printf("\nThe amount you will be left with after paying taxes:%.2f\n", inat);
    }

    else if(income > 1200000 && income <= 1600000){
        tax = (income)*15/100;
        printf("\nThe tax you have to pay for this years income:\n%.2f\n", tax);
        inat = (income - tax);
        printf("\nThe amount you will be left with after paying taxes:%.2f\n", inat);
    }

    else if(income > 1600000 && income <= 2000000){
        tax = (income)*20/100;
        printf("\nThe tax you have to pay for this year income:\n%.2f\n", tax);
         inat = (income - tax);
        printf("\nThe amount you will be left with after paying taxes:%.2f\n", inat);
    }

    else if(income > 2000000 && income <= 2400000){
        tax = (income)*25/100;
        printf("\nThe tax you have to pay for this years income:\n%.2f\n", tax);
         inat = (income - tax);
        printf("\nThe amount you will be left with after paying taxes:%.2f\n", inat);
    }

    else if(income < 5000000){
        tax = (income)*30/100;
        printf("\nThe tax you have to pay for this years income:\n%.2f\n", tax);
         inat = (income - tax);
        printf("\nThe amount you will be left with after paying taxes:%.2f\n", inat);
    }

    else if(income >= 5000000 && income <= 10000000){
        tax = (income)*30/100;
        ce = ((tax)*10/100) + (tax)*4/100;
        spt = tax + ce;
        printf("\nThe tax you have to pay for this years income:%.2f\n", spt);
         inat = (income - spt);
        printf("\nThe amount you will be left with after paying taxes:%.2f\n", inat);
    }

     else if(income > 10000000 && income <= 20000000){
        tax = (income)*30/100;
        ce = ((tax)*15/100) + (tax)*4/100;
        spt = tax + ce;
        printf("\nThe tax you have to pay for this years income:%.2f\n", spt);
         inat = (income - spt);
        printf("\nThe amount you will be left with after paying taxes:%.2f\n", inat);
    }

     else if(income > 20000000 && income <= 50000000){
        tax = (income)*30/100;
        ce = ((tax)*25/100) + (tax)*4/100;
        spt = tax + ce;
        printf("\nThe tax you have to pay for this years income:%.2f\n", spt);
         inat = (income - spt);
        printf("\nThe amount you will be left with after paying taxes:%.2f\n", inat);
    }

     else if(income > 50000000){
        printf("\nWhich regime do you want to follow. 1.Old regime, 2.New regime.\n");
        printf("\nIf want to calculate your taxes according to old regime the type 1.\n");
        printf("\nIf you want ot calcuate your taxes according to new regime then type 2.\n");
        scanf("%d", &regime);

        if(regime == 1){
        tax = (income)*30/100;
        ce = ((tax)*37/100) + (tax)*4/100;
        spt = tax + ce;
        printf("\nThe tax you have to pay for this years income:%.2f\n", spt);
         inat = (income - spt);
        printf("\nThe amount you will be left with after paying taxes:%.2f\n", inat);
        }

        else if(regime == 2){
        tax = (income)*30/100;
        ce = ((tax)*25/100) + (tax)*4/100;
        spt = tax + ce;
        printf("\nThe tax you have to pay for this years income:%.2f\n", spt);
         inat = (income - spt);
        printf("\nThe amount you will be left with after paying taxes:%.2f\n", inat);
        }
    }
    printf("\n\"We have given you your tax and also the amount with which you will be ;left with after paying the taxes.\"\n");
    }


    else if(section == 2){

        printf("So there are many types of companies. So that i can identify which tax percentage to be taken and other things please follow the instruction given bello to you");
        printf("The companies are divided into five parts:\n1.Option for section 115BAA(All domestic companies)\n2.New manufacturing company opting for section 115BAB\n");
        printf("3.Secrion 115BA (Old manufacturing Companies)\n4.General Small to Mid scale Companies\n5.General Large sclae corporations");
        printf("Type the number as per your companies type:");
        scanf("%d", &company);

        printf("Give your yearly income:");
        scanf("%f\n", &income2);

        if(company == 1){
            tax = (income2)*22/100;
            ce = ((tax)*10/100) + (tax)*4/100;
            spt = tax + ce;
            printf("Your company is the part of 115BAA companies.\n");
            printf("The tax you have to pay for this years corporate income:%.2f\n", spt);
            inat = income2 - spt;
            printf("The amount you will be left with after paying taxes:%.2f\n", inat);
        }

        else if(company == 2){
            tax = (income2)*15/100;
            ce = (tax)*10/100 + (tax)*4/100;
            spt = tax + ce;
            printf("Your company is the part of 115BAB companies.\n");
            printf("The tax you have to pay for this years corporate income:%.2f\n", spt);
            inat = income2 - spt;
            printf("The amount you will be left with after paying taxes:%.2f\n", inat);
        }

        else if(company == 3){
            tax = (income2)*25/100;
            if (income2 <= 10000000){
                ce = (tax)*4/100;
            }
            else if(income2 >= 10000000 || income2 <= 100000000){
                ce = (tax)*7/100 + (tax)*4/100;
            }
            else if(income2 > 100000000){
                ce = (tax)*12/100 + (tax)*4/100;
            }
            spt = tax + ce;
           printf("Your company is the part of 115BAB companies\n");
           printf("The tax you have to pay for this years corporate income:%.2f\n", spt);
           inat = income2 - spt;
           printf("The amount you will be left with after paying taxes:%.2f\n, inat");
            }

        else if(company == 4){
            tax = (income2)*25/100;
            if(income2 >= 10000000 || income2 <=100000000){
                ce = ((tax)*7/100) + (tax)*4/100;
            }
            else if(income2 > 100000000){
                ce = (tax)*12/100 + (tax)*4/100;
            }
            spt = tax + ce;
            printf("Your company is the part of small to mid scale companies.\n");
            printf("The tax you have to pay for this years corporate income:%.2f\n", spt);
            inat = income2 - spt;
            printf("The amount you will be left with after paying taxes:%.2f\n", inat);
        }

        else if(company == 5){
            tax = (income2)*30/100;
            if (income2 <= 10000000){
                ce = (tax)*4/100;
            }
            else if(income2 >= 10000000 || income2 <= 100000000){
                ce = (tax)*7/100 + (tax)*4/100;
            }
            else if(income2 > 100000000){
                ce = (tax)*12/100 + (tax)*4/100;
            }
            spt = tax + ce;
           printf("Your company is the part of Large scale companies.\n");
           printf("The tax you have to pay for this years corporate income:%.2f\n", spt);
           inat = income2 - spt;
           printf("The amount you will be left with after paying taxes:%.2f\n, inat");
        }
        printf("\n\"We have given you your tax and also the amount with which you will be ;left with after paying the taxes.\"\n");


        return 0;

    }

}
