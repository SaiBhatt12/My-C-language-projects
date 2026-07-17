#include<stdio.h>

int main(){
    int a;
    printf("\"Give your birth month in numbers so that i can tell your birth month name and the origin of the name also its meaning\"\n");
    scanf("%d", &a);

    if(a == 1){
        printf("Your birth month is \"January\":\n");
        printf("\"January month was named after Janus, the Roman god of doors, gates, beginnings, and endings.\nJanus is usually depicted with two faces, looking into the past and the future.\"");
        }
    
    else if(a == 2){
        printf("Your birth month is \"February\":\n");
        printf("\"February month's name derived from the Latin word februum, meaning purification.\nIt was named after Februalia, an ancient Roman festival of cleansing and atonement.\"");
    }

    else if(a == 3){
        printf("Your birth month is \"March\"\n");
        printf("\'March month was named after Mars, the Roman god of war. Historically,\nthis marked the beginning of both the military campaign season and the farming season.\'");
    }

    else if(a == 4){
        printf("Your birth month is \"April\"\n");
        printf("\"April month's name derived from the Latin word aperire, which means 'to open'.\nThis signifies the opening of buds and flowers during spring.\"");
    }

    else if(a == 5){
        printf("Your birth month is \"May\"\n");
        printf("\"May was named after Maia, the Roman goddess of earth, spring, and the growth of plants.\"");
    }

    else if(a == 6){
        printf("Your birth month is \"June\"\n");
        printf("\"June was named after Juno, the Roman goddess of marriage and childbirth, and the wife of Jupiter.\"");
    }

    else if(a == 7){
        printf("Your birth month is \"July\"\n");
        printf("\"July month was renamed in honor of the Roman general and statesman Julius Caesar.\nIt was previously called Quintilis, meaning 'fifth month' in the original ten-month calendar.\"");
    }

    else if(a == 8){
        printf("Your birth month is \"August\"\n");
        printf("\"August month's name was renamed to honor the first Roman emperor, Augustus Caesar.\nIt was previously called Sextilis, meaning 'sixth month.\"");
    }

    else if(a == 9){
        printf("Your birth month is \"September\"\n");
        printf("\"September month's named derived from the Latin word septem, meaning 'seven'.\nIt was the seventh month in the original Roman calendar.\"");
    }

    else if(a == 10){
        printf("Your birth month is \"October\"\n");
        printf("\"October month's name derived from the Latin word octo, meaning 'eight'.\nIt was the eighth month in the original Roman calendar.\"");
    }

    else if(a == 11){
        printf("Your birth month is \"November\"\n");
        printf("\"November month's name derived from the Latin word novem, meaning 'nine'.\nIt was the ninth month in the original Roman calendar.\"");
    }

    else if(a == 12){
        printf("Your birth month is \"Decmber\"\n");
        printf("\"December month's name derived from the Latin word decem, meaning 'ten'.\nIt was the tenth month in the original Roman calendar.\"");
    }

    else{
        printf("\"You have not given an valid number.\"");
     }
    return 0;
}