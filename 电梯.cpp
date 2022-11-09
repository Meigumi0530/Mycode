#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int elevator1()
{
    int floor[20];
    int i=0;
    int j=0;
    int t=0;
    int p=0;
    int c=0;
    int weight[10];
    int s=0;
    int h;
    int l;
    int p1;
    int m;
    int x;
    srand(time(NULL));
    x=rand()%20;
    while(1)
    {
        printf("1.上楼\n");
        printf("2.下楼\n");
        printf("3.退出\n");
     printf("请选择(1-3):");

         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("此电梯可服务全部楼层\n");
             printf("此电梯最大乘客数量10人，最大载重量800KG\n");
             printf("此时电梯正在%d层,稍作等待\n",x);
             printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                        if(s>800)
                           {
                         printf("超重，请下去一个人\n");
                         s=s-weight[i];
                         p=p-1;
                           }
             }
                printf("载重量为%dkg,未超重\n",s);

                      printf("请输入你想去的楼层:\n");
                         for(i=0;i<p;i++)
                         {
                          printf("第%d个人: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                     printf("将依次到达下列楼层:\n");

                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层，走好\n",floor[j]);
                      printf("此层有没有人进电梯?请选择：1-2\n");
                      printf("1.有人\n");
                      printf("2.无人\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("超重，请下去一个人\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",s);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层，走好\n",floor[m]);
                           continue;

                         }
                           break;


                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }



                  }

                  break;



         case 2:
              printf("此电梯可服务全部楼层\n");
              printf("此电梯最大乘客数量10人，最大载重量800KG\n");
              printf("此时电梯正在%d层,稍作等待\n",x);
              printf("请输入进入电梯的人数:\n");
              scanf("%d",&p);
              printf("他们的体重依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                       if(s>800)
                           {
                         printf("超重，请下去一个人\n");
                         s=s-weight[i];
                    p=p-1;
                           }
             }
                printf("载重量为%dkg,未超重\n",s);

                      printf("请输入你想去的楼层:\n");
                         for(i=0;i<p;i++)
                         {
                              printf("第%d个人: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层，走好\n",floor[j]);
                      printf("此层有没有人进电梯?请选择：1-2\n");
                      printf("1.有人\n");
                      printf("2.无人\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("超重，请下去一个人\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",s);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层，走好\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }
                  break;
        case 3:
             return 0;
             break;
         }
    }
    }


    int elevator2()
    {

    int floor[20];
    int i=0;
    int j=0;
    int t;
    int p;
    int c;
    int h;
    int weight[10];
    int s=0;
    int l;
    int p1;
    int m;


    while(1)
    {
        printf("1.上楼\n");
        printf("2.下楼\n");
        printf("3.退出\n");
     printf("请选择(1-3):");

         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("此电梯只服务单号楼层\n");
             printf("此电梯最大乘客数量10人，最大载重量800KG\n");
             printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                            if(s>800)
                           {
                         printf("超重，请下去一个人");
                         s=s-weight[i];
                    p=p-1;
                           }
             }
                printf("载重量为%dkg,未超重\n",s);

                      printf("请输入你想去的单号楼层:\n");
                         for(i=0;i<p;i++)
                         {
                            printf("第%d个人: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层，走好\n",floor[j]);
                      printf("此层有没有人进电梯?请选择：1-2\n");
                      printf("1.有人\n");
                      printf("2.无人\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("超重，请下去一个人\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",s);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层，走好\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }
                  break;

         case 2:

             printf("此电梯只服务单号楼层\n");
             printf("此电梯最大乘客数量10人，最大载重量800KG\n");
             printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                             if(s>800)
                           {
                         printf("超重，请下去一个人");
                         s=s-weight[i];
                    p=p-1;
                           }
             }
                printf("载重量为%dkg,未超重\n",s);

                      printf("请输入你想去的单号楼层:\n");
                         for(i=0;i<p;i++)
                         {
                               printf("第%d个人: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层，走好\n",floor[j]);
                      printf("此层有没有人进电梯?请选择：1-2\n");
                      printf("1.有人\n");
                      printf("2.无人\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("超重，请下去一个人\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",s);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层，走好\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }
                  break;
          case 3:
             return 0;
             break;

         }
    }
    }



    int elevator3()
    {
    int floor[20];
    int i=0;
    int j=0;
    int t;
    int p;
    int c;
    int weight[20];
    int s=0;
    int h;
    int l;
    int p1;
    int m;
    while(1)
    {
        printf("1.上楼\n");
        printf("2.下楼\n");
        printf("3.退出\n");
     printf("请选择(1-3):");

         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("此电梯只服务双号楼层\n");
             printf("此电梯最大乘客数量20人，最大载重量1600KG\n");
             printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                         if(s>1600)
                           {
                         printf("超重，请下去一个人");
                         s=s-weight[i];
                    p=p-1;
                           }
             }
                printf("载重量为%dkg,未超重\n",s);

                      printf("请输入你想去的双号楼层:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("第%d个人: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                  printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层，走好\n",floor[j]);
                      printf("此层有没有人进电梯?请选择：1-2\n");
                      printf("1.有人\n");
                      printf("2.无人\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("超重，请下去一个人\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",s);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层，走好\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }
                  break;


         case 2:
                printf("此电梯只服务双号楼层\n");
                printf("此电梯最大乘客数量20人，最大载重量1600KG\n");
                printf("请输入进入电梯的人数:\n");
                scanf("%d",&p);
                printf("他们的体重依次是:\n");
                  for(i=0;i<p;i++)
                  {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                           if(s>1600)
                           {
                         printf("超重，请下去一个人");
                         s=s-weight[i];
                    p=p-1;
                           }
                  }
                printf("载重量为%dkg,未超重\n",s);

                      printf("请输入你想去的双号楼层:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("第%d个人: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                  printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层，走好\n",floor[j]);
                      printf("此层有没有人进电梯?请选择：1-2\n");
                      printf("1.有人\n");
                      printf("2.无人\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("超重，请下去一个人\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",s);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层，走好\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }
                  break;
           case 3:
             return 0;
             break;

         }
    }
    }


    int elevator4()
    {
    int floor[20];
    int i=0;
    int j=0;
    int t;
    int p;
    int c;
    int weight[20];
    int s=0;
    int h;
    int x;
    int l;
    int p1;
    int m;
    srand(time(NULL));
    x=rand()%20;
    while(1)
    {
        printf("1.上楼\n");
        printf("2.下楼\n");
        printf("3.退出\n");
     printf("请选择(1-3):");

         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("此电梯可服务全部楼层\n");
             printf("此电梯最大乘客数量20人，最大载重量2000KG\n");
             printf("此时电梯正在%d层,稍作等待\n",x);
            printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                    if(s>2000)
                    {
                         printf("超重，请下去一个人");
                         s=s-weight[p];
                    p=p-1;
                    }
             }
                printf("载重量为%dkg,未超重\n",s);


                      printf("请输入你想去的楼层:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("第%d个人: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层，走好\n",floor[j]);
                      printf("此层有没有人进电梯?请选择：1-2\n");
                      printf("1.有人\n");
                      printf("2.无人\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                           printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("超重，请下去一个人\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",s);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层，走好\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }
                  break;


         case 2:


             printf("此电梯服务全部楼层\n");
             printf("此电梯最大乘客数量20人，最大载重量2000KG\n");
             printf("此时电梯正在%d层,稍作等待\n",x);
             printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                s=s+weight[i];
                   if(s>2000)
                   {
                    printf("超重，请下去一个人");
                    s=s-weight[i];
                p=p-1;
                   }

             }
             printf("载重量为%dkg,未超重\n",s);

                      printf("请输入你想去的楼层:\n");
                         for(i=0;i<p;i++)
                         {
                            printf("第%d个人: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                     printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层，走好\n",floor[j]);
                      printf("此层有没有人进电梯?请选择：1-2\n");
                      printf("1.有人\n");
                      printf("2.无人\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                           printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               s=s+weight[l];
                        if(s>800)
                           {
                         printf("超重，请下去一个人\n");
                         s=s-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",s);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层，走好\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }
                  break;
         case 3:
             return 0;
             break;
         }
    }
    }

    void main()
    {
        int a;
    while(1)
        {

        printf("欢迎使用电梯\n");
        printf("1.乘坐1号电梯\n");
        printf("2.乘坐2号电梯\n");
        printf("3.乘坐3号电梯\n");
        printf("4.乘坐4号电梯\n");
        printf("5.退出\n");
        printf("请选择(1-5):");

         scanf("%d",&a);

         getchar();

         switch(a)

         {
         case 1:
             elevator1();
             break;
         case 2:
            elevator2();
             break;

         case 3:
               elevator3();
               break;
         case 4:
            elevator4();
             break;
         case 5:
             exit(0);
             break;
         }
    }
    }