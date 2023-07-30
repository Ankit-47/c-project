#include <stdio.h>
#include <string.h>

int main() {
   char name[100];
   char lastname[50];
   int year ;
    int day;
    char month[20];

    printf("Enter your first name:\n ");
    scanf(" %s", name);
    printf("Enter your last name:");
    scanf("%s",lastname);
    printf("!!!!!Enter below information as AD calender!!!");
     printf("\nEnter your year:");
    scanf("%d", &year);
    printf("\nEnter your birth month(like April,March,June......): ");
    scanf("%s", month);
    printf("\nEnter your birth day (AD):\n");
    scanf("%d",&day);
FILE *fp;
fp = fopen("output.txt", "w");
    if ((strcmp(month, "March") == 0 && day >= 21) || (strcmp(month, "April") == 0 && day <= 19))
     {
 printf("%s, your zodiac sign is Aries.\n", name);
printf("Your main traits is Courage. People of this zodiac are brave and alone fighter.They can handle situations on their own way");
   fprintf(fp,"%s, your zodiac sign is Aries.\n", name);
fprintf(fp,"Your main traits is Courage.People of this zodiac are brave and alone fighter.They can handle situations on their own way");
             
    }
    else if ((strcmp(month, "April") == 0 && day >= 20) || (strcmp(month, "May") == 0 && day <= 20))
     {
        printf("%s, your zodiac sign is Taurus\n", name);
 printf("Your main trait is stable.");
     fprintf(fp,"%s, your zodiac sign is Taurus\n", name);
 fprintf(fp,"Your main trait is stable.the bull of the zodiac sphere is known to remain grounded, practical and responsible.");}
    else if ((strcmp(month, "May") == 0 && day >= 20) || (strcmp(month, "June") == 0 && day <= 20))
     {
        printf("%s, your zodiac sign is Gemini.\n", name);
        printf("Your main trait is outgoing.");
       fprintf(fp,"%s, your zodiac sign is Gemini.\n", name);
        fprintf(fp,"Your main trait is outgoing.The twins of the zodiac universe have a refreshing duality that makes them attract people like a magnet");
    }
    else if ((strcmp(month, "June") == 0 && day >= 21) || (strcmp(month, "July") == 0 && day <= 22))
     {
        printf("%s, your zodiac sign is Cancer.\n", name);
        printf("Your main trait is loyal.");
        fprintf(fp,"%s, your zodiac sign is Cancer.\n", name);
        fprintf(fp,"Your main trait is loyal.The homebody of the zodiac wheel, your loved ones feel a sense of belonging when they are with you");
    }
    else if ((strcmp(month, "July") == 0 && day >= 23) || (strcmp(month, "August") == 0 && day <= 22))
     {
        printf("%s, your zodiac sign is Leo.\n", name);
        printf("Your main trait is confidence.");
        fprintf(fp,"%s, your zodiac sign is Leo.\n", name);
       fprintf(fp,"Your main trait is confidence.You know what you want in life and you are unabashed in your quest to get it done.");
    }
    else if ((strcmp(month, "August") == 0 && day >= 23) || (strcmp(month, "September") == 0 && day <= 22))
     {
        printf("%s, your zodiac sign is Virgo.\n", name);
        printf("Your main trait is perfectionism.");
         fprintf(fp,"%s, your zodiac sign is Virgo.\n", name);
        fprintf(fp,"Your main trait is perfectionism.if you want something done, call anybody. But if you want it done right, call a Virgo.");
    }
    else if ((strcmp(month, "September") == 0 && day >= 23) || (strcmp(month, "October") == 0 && day <= 22))
     {
        printf("%s, your zodiac sign is Libra.\n", name);
        printf("Your main trait is balance.");
        fprintf(fp,"%s, your zodiac sign is Libra.\n", name);
        fprintf(fp,"Your main trait is balance.Harmony and peace assume top billing on your zodiac sign’s calling card, and with good reason ");
    }
    else if ((strcmp(month, "October") == 0 && day >= 23) || (strcmp(month, "November") == 0 && day <= 21))
     {
        printf("%s, your zodiac sign is Scorpio.\n", name);
        printf("Your main trait is passionate. ");
        fprintf(fp,"%s, your zodiac sign is Scorpio.\n", name);
       fprintf(fp,"Your main trait is passionate.among the most misunderstood signs of the zodiac, what the world sees as aggressive and confrontational is actually your deep-rooted passion for standing up for the underdog");
    
    
    }
    else if ((strcmp(month, "November") == 0 && day >= 22) || (strcmp(month, "December") == 0 && day <= 21))
     {
        printf("%s, your zodiac sign is Sagittarius.\n", name);
        printf("Your main trait is spontanous.");
        fprintf(fp,"%s, your zodiac sign is Sagittarius.\n", name);
        fprintf(fp,"Your main trait is spontanous.As a fire sign, your quest for knowledge is destined to take you to great places.");
    }
    else if ((strcmp(month, "December") == 0 && day >= 22) || (strcmp(month, "January") == 0 && day <= 19))
     {
        printf("%s, your zodiac sign is Capricon.\n", name);
        printf("Your main trait is consistent");
        fprintf(fp,"%s, your zodiac sign is Capricon.\n", name);
        fprintf(fp,"Your main trait is consistent.Methodical, practical and determined, there is no deterring a Capricorn once they have a goal in their sights");}
    else if ((strcmp(month, "January") == 0 && day >= 20) || (strcmp(month, "February") == 0 && day <= 18))
     {
        printf("%s, your zodiac sign is Aquarius.\n", name);
        printf("Your main trait is Philosophical.");
        fprintf(fp,"%s, your zodiac sign is Aquarius.\n", name);
        fprintf(fp,"Your main trait is Philosophical.At the risk of earning a reputation as detached and aloof, this analytical and innovative sign would rather stand at the fringes of the crowd instead of following the herd.");
    }
else if ((strcmp(month, "February") == 0 && day >= 19) || (strcmp(month, "March") == 0 && day <= 20))
     {
        printf("%s, your zodiac sign is Pisces.\n", name);
        printf("Your main trait is Romantic.");
        fprintf(fp,"%s, your zodiac sign is Pisces.\n", name);
        fprintf(fp,"Your main trait is Romantic.Pisces  tends to see the world through rose-coloured glasses but your hopelessly romantic soul is grounded in a deep sense of intuition, sensitivity and empathy ");
    }
    else printf ("****INVALID PROVIDED INFORMATIONS****");
if (fp == NULL) {
    printf("Error opening file.");
    return 1;
}
fclose(fp);

}