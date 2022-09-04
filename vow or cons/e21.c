#include<stdio.h>
int main()
{
char alpha;
printf("\n Enter Any Alphabet word: ");
scanf("%c",&alpha);
switch(alpha)
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
{
printf("\nGiven Character is a vowel");
break;
}
default:
{
printf("\nGiven Character is a Consonant");
break;
}
}
return 0;
}

/*{
case 'A':
{
printf("\nGiven Character is a vowel");
break;
}
case 'E':
{
printf("\nGiven Character is a vowel");
break;
}
case 'I':
{
printf("\nGiven Character is a vowel");
break;
}
case 'O':
{
printf("\nGiven Character is a vowel");
break;
}
case 'U':
{
printf("\nGiven Character is a vowel");
break;
}
case 'a':
{
printf("\nGiven Character is a vowel");
break;
}
case 'e':
{
printf("\nGiven Character is a vowel");
break;
}
case 'i':
{
printf("\nGiven Character is a vowel");
break;
}
case 'o':
{
printf("\nGiven Character is a vowel");
break;
}
case 'u':
{
printf("\nGiven Character is a vowel");
break;
}
default:
{
printf("\nThe Given Character is a Consonant");
break;
}
}
return 0;
}
*/
