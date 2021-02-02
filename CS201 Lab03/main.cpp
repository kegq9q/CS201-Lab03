//
//  lab03.cpp
//  CS201 Lab03
//  kegq9q@umsystem.edu
//  Created by Kristin G on 2/1/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    
    using namespace std;
    //variable
    char ch;
    //ticket prices
    double child = 10.95,adult= 19.99,senior= 18.99,v = 7.99;
    double total,g_total = 0;
    double childP = 0,adltP =0,snrP=0,vip=0;
    int child_n = 0,adlt_n =0,snr_n=0,vip_n=0,n;

    cout << "Welcome to Fun Park Menu System !!";
    for(int i = 1;i<3;i++)//for loop
    {
        
    //initialization for iteration
    child_n = 0,adlt_n =0,snr_n=0,vip_n=0;
    childP = 0,adltP =0,snrP=0,vip=0;
      
    cout << "\nStarting day "<<i;

    while(ch!='q')//while user enters 'q' for quit
    {
    cout << "\nEnter (C)hild,(A)dult,(S)enior,(V)IP or (Q)uit >>";
    cin >> ch;//ask from user
    ch = toupper(ch);
    
    //if-else statements
    if(ch=='C')
    {
    cout << "\nHow many children?";
    cin >> n;
    child_n = child_n+n;//sum up number of children
    n = (double)n;
    childP = childP+(n*child);//calculate cost of tickets for each day
    }
        
    else
    if(ch=='A')
    {
    cout << "\nHow many Adults?";
    cin >> n;
    adlt_n = adlt_n+n;//sum up number of adults
    n = (double)n;
    adltP = adltP+(n*adult);//calculate cost of tickets for each day
    }
        
    else
    if(ch=='S')
    {
    cout << "\nHow many Seniors?";
    cin >> n;
    snr_n = snr_n+n;//sum up number of Seniors
    n = (double)n;
    snrP = snrP+(n*senior);//calculate cost of tickets for each day
    }
        
    else
    if(ch=='V')
    {
    cout << "\nHow many VIP's?";
    cin >> n;
    vip_n = vip_n+n;//sum up number of VIPs
    n = (double)n;
    vip = vip+(n*v);//calculate cost of tickets for each day
    }
        
    else
    if(ch=='Q')
    {
    break;
    }
    }
    total = 0;
    total = adltP+childP+vip+snrP;//make total for each day
    g_total = g_total+total;//make grand total for all days

    if(i==2)
    {
    cout << "\nDay 3";
    }
    else
    {
    cout << "\nDay "<<i;
    }
    //print all information
    cout << "\n   Child "<<child_n<<" @ " << child << " = " << childP;
    cout << "\n   Adults " << adlt_n << " @ " << adult << " = " << adltP;
    cout << "\n   Senior " << snr_n << " @ " << senior << " = "<<snrP;
    cout << "\n   VIP " << vip_n << " @ " << v << " = "<<vip;
    cout << "\n   Total " << total;
    cout << "\n\nThe total for all days is " << g_total;
    }
    
    return 0;
}
