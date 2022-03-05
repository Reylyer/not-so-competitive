#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,hasil;
    int arr[16];
    cin >> a >> b >> c >> d;
    arr[0]= a;
    arr[1]= b;
    arr[2]= c;
    arr[3]= d;
    arr[4]= a;
    arr[5]= b;
    arr[6]= c;
    arr[7]= d;
    arr[8]= a;
    arr[9]= b;
    arr[10]= c;
    arr[11]= d;
    arr[12]= a;
    arr[13]= b;
    arr[14]= c;
    arr[15]= d;
    for (int i = 0; i < 12; i++)
    {
        cout << i << endl;
        hasil = (arr[i]/arr[i+1])/(arr[i+2]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+1])-(arr[i+2]-arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])+(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        //
        hasil = (arr[i]*arr[i+1])*(arr[i+2]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])*(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+1])*(arr[i+2]-arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+1])*(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])*(arr[i+2]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])*(arr[i+2]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]/arr[i+1])+(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+1])*(arr[i+2]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]*arr[i+1])-(arr[i+2]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])-(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+1])-(arr[i+2]-arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+1])-(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])-(arr[i+2]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])-(arr[i+2]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]/arr[i+1])-(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+1])-(arr[i+2]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]*arr[i+1])+(arr[i+2]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])+(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+1])+(arr[i+2]-arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+1])+(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])+(arr[i+2]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])+(arr[i+2]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]/arr[i+1])+(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+1])+(arr[i+2]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]*arr[i+1])/(arr[i+2]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])/(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+1])/(arr[i+2]-arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+1])/(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])/(arr[i+2]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1])/(arr[i+2]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]/arr[i+1])/(arr[i+2]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+1])/(arr[i+2]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]+arr[i+1]+arr[i+2])*arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1]-arr[i+2])*arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+1]/arr[i+2])*arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]+arr[i+1]+arr[i+2])-arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1]-arr[i+2])-arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+1]/arr[i+2])-arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]+arr[i+1]+arr[i+2])/arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1]-arr[i+2])/arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+1]/arr[i+2])/arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]+arr[i+1]+arr[i+2])+arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+1]-arr[i+2])+arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+1]/arr[i+2])+arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]-arr[i+2])-(arr[i+1]-arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]/arr[i+2])/(arr[i+1]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])+(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+2])*(arr[i+1]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])*(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+2])*(arr[i+1]-arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+2])*(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])*(arr[i+1]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])*(arr[i+1]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]/arr[i+2])*(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+2])*(arr[i+1]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]*arr[i+2])/(arr[i+1]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])/(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+2])/(arr[i+1]-arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+2])/(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])/(arr[i+1]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])/(arr[i+1]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]/arr[i+2])/(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+2])/(arr[i+1]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]*arr[i+2])-(arr[i+1]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])-(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+2])-(arr[i+1]-arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+2])-(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])-(arr[i+1]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])-(arr[i+1]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]/arr[i+2])-(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+2])-(arr[i+1]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]*arr[i+2])+(arr[i+1]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])+(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+2])+(arr[i+1]-arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+2])+(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])+(arr[i+1]*arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2])+(arr[i+1]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]/arr[i+2])+(arr[i+1]+arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]-arr[i+2])+(arr[i+1]/arr[i+3]);
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]+arr[i+2]+arr[i+1])*arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2]-arr[i+1])*arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+2]/arr[i+1])*arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]+arr[i+2]+arr[i+1])-arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2]-arr[i+1])-arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+2]/arr[i+1])-arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]+arr[i+2]+arr[i+1])+arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2]-arr[i+1])+arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+2]/arr[i+1])+arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]+arr[i+2]+arr[i+1])-arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2]-arr[i+1])-arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+2]/arr[i+1])-arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        hasil = (arr[i]+arr[i+2]+arr[i+1])/arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]+arr[i+2]-arr[i+1])/arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        hasil = (arr[i]*arr[i+2]/arr[i+1])/arr[i+3];
        cout << hasil << endl;
        if (hasil==36){
            cout << "Bisa" << endl;
            return 0;
        }
        // 
        
    }
    cout << "Tidak Bisa" << endl;
}