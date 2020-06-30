#include <bits/stdc++.h>
const int us=678456545631298371289379182732;
using namespace std;
int main()
{
    int test;
    int ans = 0;
    cin>>test;
    while(test--)
    {
        long long int aa[3],bb[3],tempp=0;
        cin>>aa[0]>>aa[1]>>aa[2];
        cin>>bb[0]>>bb[1]>>bb[2];
        long long int add[3],mul[3],rem[3]={0};
        for(int i=0;i<3;i++)
        {
            add[i]=bb[i]-aa[i];
            if(aa[i]==0)
            {
                mul[i]=us;
            }
            else
            {
                mul[i]=bb[i]/aa[i];
                rem[i]=bb[i]%aa[i];
            }
        }
        if(aa[1]==bb[1] && aa[0]==bb[0] && aa[2]==bb[2])
        {
            cout<<0<<endl;
            tempp=1;
        }
        else if((add[0]==0&&add[1]==0) || (add[1]==0&&add[2]==0) || (add[2]==0&&add[0]==0))
        {
            cout<<1<<endl;
            tempp=1;
        }
        else if(((add[0]==add[1])&&add[2]==0) || ((add[2]==add[1])&&add[0]==0) || ((add[0]==add[2])&&add[1]==0))
        {
            cout<<1<<endl;
            tempp=1;
        }
        else if((rem[0]==0&&rem[1]==0&&(mul[0]==mul[1])&&add[2]==0&&mul[0]!=us) || (rem[1]==0&&rem[2]==0&&(mul[1]==mul[2])&&add[0]==0&&mul[2]!=us) || (rem[0]==0&&rem[2]==0&&(mul[0]==mul[2])&&add[1]==0&&mul[0]!=us))
        {
            cout<<1<<endl;
            tempp=1;
        }
        else if(add[0]==add[1] && add[1]==add[2])
        {
            cout<<1<<endl;
            tempp=1;
        }
        else if(rem[0]==0 && rem[1]==0 && rem[2]==0 && (mul[0]==mul[1]) && (mul[1]==mul[2]) && mul[0]!=us)
        {
            cout<<1<<endl;
            tempp=1;
        }
        else if(add[0]==0 || add[1]==0 || add[2]==0)
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if(add[0]==add[1] || add[1]==add[2] || add[2]==add[0])
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if((rem[0]==0 && rem[1]==0 && mul[0]!=us && (mul[0]==mul[1])) || (rem[2]==0 && mul[1]!=us && rem[1]==0 && (mul[2]==mul[1])) || (rem[0]==0 && mul[0]!=us && rem[2]==0 && (mul[0]==mul[2])))
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if(((add[0]+add[1])==add[2]) || ((add[2]+add[1])==add[0]) || ((add[0]+add[2])==add[1]))
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if(((rem[0]==0&&rem[1]==0&&rem[2]==0)&&(mul[0]!=us&&mul[1]!=us&&mul[2]!=us)&&(((mul[0]*mul[1])==mul[2]) || ((mul[2]*mul[1])==mul[0]) || ((mul[0]*mul[2])==mul[1]))))
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if(((rem[2]==0)&&(mul[2]!=us)&&(bb[0]==(add[1]+(aa[0]*mul[2])))) || ((rem[1]==0)&&(mul[1]!=us)&&(bb[0]==(add[2]+(aa[0]*mul[1])))))  
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if(((rem[2]==0)&&(mul[2]!=us)&&(bb[1]==(add[0]+(aa[1]*mul[2])))) || ((rem[0]==0)&&(mul[0]!=us)&&(bb[1]==(add[2]+(aa[1]*mul[0])))))  
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if(((rem[0]==0)&&(mul[0]!=us)&&(bb[2]==(add[1]+(aa[2]*mul[0])))) || ((rem[1]==0)&&(mul[1]!=us)&&(bb[2]==(add[0]+(aa[2]*mul[1]))))) 
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if(((rem[1]==0)&&(mul[1]!=us)&&(bb[0]==(mul[1]*(aa[0]+add[2])))) || ((rem[2]==0)&&(mul[2]!=us)&&(bb[0]==(mul[2]*(aa[0]+add[1])))))
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if(((rem[0]==0)&&(mul[0]!=us)&&(bb[1]==(mul[0]*(aa[1]+add[2])))) || ((rem[2]==0)&&(mul[2]!=us)&&(bb[1]==(mul[2]*(aa[1]+add[0])))))
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if(((rem[1]==0)&&(mul[1]!=us)&&(bb[2]==(mul[1]*(aa[2]+add[0])))) || ((rem[0]==0)&&(mul[0]!=us)&&(bb[2]==(mul[0]*(aa[2]+add[1])))))
        {
            cout<<2<<endl;
            tempp=1;
        }
        else if((bb[1]==bb[0]) && (bb[2]==bb[0]))
        {
            cout<<2<<endl;
            tempp=1;
        }
        if(tempp==0&&aa[0]!=aa[1])
        {
            float x,y;
            x=(((bb[0]-bb[1])*(1.0))/(aa[0]-aa[1]));
            y=(((bb[1]*aa[0])-(aa[1]*bb[0])*(1.0))/(aa[0]-aa[1]));
            if(x==(int)x && y==(int)y && (bb[2]==((aa[2]*x)+y) || bb[2]==(aa[2]*x) || bb[2]==aa[2]+y))
            {
                cout<<2<<endl;
                tempp=1;
            }
        }
        if(tempp==0&&aa[2]!=aa[1])
        {
            float x,y;
            x=(((bb[2]-bb[1])*(1.0))/(aa[2]-aa[1]));
            y=(((bb[1]*aa[2])-(aa[1]*bb[2])*(1.0))/(aa[2]-aa[1]));
            if(x==(int)x && y==(int)y && (bb[0]==((aa[0]*x)+y) || bb[0]==(aa[0]*x) || bb[0]==aa[0]+y))
            {
                cout<<2<<endl;
                tempp=1;
            }
        }
        if(tempp==0&&aa[0]!=aa[2])
        {
            float x,y;
            x=(((bb[0]-bb[2])*(1.0))/(aa[0]-aa[2]));
            y=(((bb[2]*aa[0])-(aa[2]*bb[0])*(1.0))/(aa[0]-aa[2]));
            if(x==(int)x && y==(int)y && (bb[1]==((aa[1]*x)+y) || bb[1]==(aa[1]*x) || bb[1]==aa[1]+y))
            {
                cout<<2<<endl;
                tempp=1;
            }
        }
        if(tempp==0 && aa[0]!=aa[1])
        {
            float x,y;
            x=(((bb[1]*aa[0])-(aa[1]*bb[0])*(1.0))/(bb[0]-bb[1]));
            y=(((bb[0]-bb[1])*(1.0))/(aa[0]-aa[1]));
            if(x==(int)x && y==(int)y && (bb[2]==((aa[2]+x)*y) || bb[2]==(aa[2]+x) || bb[2]==aa[2]*y))
            {
                cout<<2<<endl;
                tempp=1;
            }
        }
        if(tempp==0 && aa[0]!=aa[2])
        {
            float x,y;
            x=(((bb[2]*aa[0])-(aa[2]*bb[0])*(1.0))/(bb[0]-bb[2]));
            y=(((bb[0]-bb[2])*(1.0))/(aa[0]-aa[2]));
            if(x==(int)x && y==(int)y && (bb[1]==((aa[1]+x)*y) || bb[1]==(aa[1]+x) || bb[1]==aa[1]*y))
            {
                cout<<2<<endl;
                tempp=1;
            }
        }
        if(tempp==0 && aa[2]!=aa[1])
        {
            float x,y;
            x=(((bb[1]*aa[2])-(aa[1]*bb[2])*(1.0))/(bb[2]-bb[1]));
            y=(((bb[2]-bb[1])*(1.0))/(aa[2]-aa[1]));
            if(x==(int)x && y==(int)y && (bb[0]==((aa[0]+x)*y) || bb[0]==(aa[0]+x) || bb[0]==aa[0]*y))
            {
                cout<<2<<endl;
                tempp=1;
            }
        }
        if(tempp==0)
        {
            cout<<3<<endl;
        }
    }
}
