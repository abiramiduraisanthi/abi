int main()
{
char b[30];
int i,line=0;
printf("\n enter the lines:");
scanf("%[^\n]d",&b);
for(i=0;b[i]!='\0';i++)
{
if(b[i]=='.')
{
line++;
}
}
printf("%d\n",line);
return 0;
}

