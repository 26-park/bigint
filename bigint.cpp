#include<iostream>
#include<string>



int main(){
    std::string first,second;
    std::cout << "First number  >> ";
    std::cin >> first;
    std::cout << "Second number >> ";
    std::cin >> second;

    

    std::string add = "";
    std::string sub = "";
    
    //덧셈
    int carry=0;
    int i = first.length()-1;
    int j = second.length()-1;
    
    while (i>=0 || j>=0 || carry)
    {
        int sum=carry;
        if (i >=0)
        {
            sum+=first[i]-'0';
            i--;
        }
        if (j >=0)
        {
            sum+=second[j]-'0';
            j--;
        }

        add=char(sum%10 +'0')+add;
        carry=sum/10;
        
    }
    //뺄셈
    int a;
    int b;
    bool sign = true;
    if (std::stoi(first)<std::stoi(second))
    {
        sign=false;
        std::string temp;
        temp=first;
        first=second;
        second=temp;
    }
    
    int borrow=0;
    a=first.length()-1;
    b=second.length()-1;
     
  



    while (a>=0|| b>=0)
    {
        int diff = borrow;
        if (a>=0)
        {
            diff+=first[a] - '0';
            a--;
        }
        if (b>=0)
        {
            diff-=second[b] - '0';
            b--;
        }
        if (diff <0)
        {
            diff+=10;
            borrow=-1;
        }else{
            borrow=0;
        }
        sub=char(diff % 10 + '0') + sub;
        
        


    }
    sub.erase(0, sub.find_first_not_of('0'));
    
    
    std::cout << "Sum           >> " << add << std::endl;
    if (first==second)
    {
        std::cout << "Sub           >> " << 0 << std::endl;
    }else if (sign)
    {
        std::cout << "Sub           >> " << sub << std::endl;
    }else if(!sign){
        std::cout << "Sub           >> -" << sub << std::endl;
    }
    
    

   

    

    
}


