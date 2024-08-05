#include <stdio.h>
#include <unistd.h>

int n;
int queue[25];
int length;

int qinit()
{
    printf("[Enter the Numbers]\n");

    for (int i = 0; i < n; i++)
    {
    scanf("%d", &queue[i]);
    }
    printf("[The Elements of the Queue is:] \n");

    for (int i = 0; i < n; i++)
    {
        printf("Queue[%d]:%d \n", i, queue[i]);
    }
}

int qdelete()
{
    printf("[How many elements you want to delete?]\n ");
    int delete;
    scanf("%d", &delete);

    for (int k = 0; k <= length; k++)
    {
        queue[k] = queue[k + delete];
    }
    length -= delete;
    return 0;
}

int qadd()
{

    printf("[Enter how many elements you want to add to the Queue]\n");
    scanf("%d", &n);

    printf("[Enter The numbers]\n");
    for (int i = length; i < n + length; i++)
    {
        scanf("%d", &queue[i]);
    }
    length += n;
    return 0;
}

int qDisplay()
{

    printf("[The Queue now is:]\n");

    for (int i = 0; i < length; i++)
    {
        printf("Queue[%d]:%d \n", i, queue[i]);
    }
    return 0;
}

int main()
{

    printf("[This is a Queue list]\n");
    printf("[Enter the Queue's length:]\n");

    scanf("%d", &n);
    length = n;

    qinit();

    char esc;
    while (esc != 'q')
    {
        printf("Type a to add to the Queue\n"
               "Type d to delete from the Queue\n"
               "type q to Quit\n");

        esc = getchar();

        if (esc == 'a')
        {
            qadd();
            qDisplay();
        }
        if (esc == 'd')
        {
            qdelete();
            qDisplay();
        }
    }

    printf("you've quitted\n");
    return 0;
}