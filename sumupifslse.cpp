#include<iostream>
using namespace std;
int main()
{
	int n,m;
	D:
	cout <<"1:printing even no. code:"<<"\n";
	cout <<"2:printing odd no. code:"<<"\n";
	cout <<"3:printing 25 even no. code:"<<"\n";
	cout <<"4:printing 25 odd no. code:"<<"\n";
	cout <<"5:printing series of 100 no multiple of 5 and 2 code:"<<"\n";
	cout <<"6:printing follwing sequence -2, 0, 2, 0 ,2 ,4, 2 ,4 ,6, 4, 6, 8 code:"<<"\n";
	cout <<"7:printing factorial code:"<<"\n";
	cout <<"8:printing prime no. code:"<<"\n";
	cout <<"9:printing harmonic series code:"<<"\n";
	cout <<"which program you wanna run enter no as mention numbering."<<"\n";
	cin>>n;
	if(n==1)
	{
		int a;
	a=2;
	A:
	cout << a <<"\n" <<endl;
	a=a+2;
	if(a<=100)
	{
		goto A;
	}
	cout <<"wanna repeat the process";
	cin >> m;
		if(m==1)
		{
			goto D;
		}
	}
		if(n==2)
		{	int a;
	a=1;
	C:
	cout << a <<"\n" <<endl;
	a=a+2;
	if(a<=100)
	{
		goto C;
	}
	cout <<"wanna repeat the process";
	cin >> m;
		if(m==1)
		{
			goto D;
		}
		
		}
		if(n==3)
		{
    int a=0;
    int counter=0;
    I:
    if(counter <25)
	{
        counter=counter+1;
        a=a+2;
        goto I;
         
    }
    cout << "25 even no is "<< a;	
	cout <<"\nwanna repeat the process";
	cin >> m;
		if(m==1)
		{
			goto D;
		}}
		
		if (n== 4)
		{
			int b=1;
    int count=0;
    K:
    if(count <25)
	{
        count=count+1;
        b=b+2;
        goto K;
         
    }
     cout <<"25 odd no is " << b;
 
 	cout <<"\nwanna repeat the process";
	cin >> m;
		if(m==1)
		{
			goto D;
		}}
		if(n==5)
		{
			int a = 0;
    int counter = 0;
L:

    if (a / 5 * 5 == a && (a / 2 * 2) == a) {
        a = a + 10; 
        if (counter < 100) {
            counter = counter + 1;
            cout << a << "\n"; 
            goto L;
            
        }
        cout <<"\nwanna repeat the process";
	cin >> m;
		if(m==1)
		{
			goto D;
		}}
		}
		if(n==6)
		{
			int a = -2;
    int count = 1;
    int times=1;

W:
	
    cout << a << ", ";
times++;
    if (count == 3) {
        count = 0; 
        
        a -= 2;    
    } else {
        a += 2;
        
		  
    }

    if (times < 100) {
        count++;
        goto W;
    } cout <<"\nwanna repeat the process";
	cin >> m;
		if(m==1)
		{
			goto D;
		}}
		if(n==7)
		{int factorial = 1;
    int i = 0;

print_factorial:
    cout << "Factorial of " << i << ": " << factorial << endl;

    if (i < 10) {
        i++;
        factorial *= i;
        goto print_factorial;
    }cout <<"\nwanna repeat the process";
	cin >> m;
		if(m==1)
		{
			goto D;
		}}

		if(n==8)
		{
	
    int a = 2, n, count, counter, sum;
    counter = 0;
    sum = 0;

    cout << a << " ";

T:
    if (counter < 19) {
        n = 2;
        count = 0;

    O:
        
        int remainder = a - (n * (a / n));
        if (remainder == 0) {
            count++;
        }
        n++;

        if (n < a) {
            goto O;
        }

        if (count == 0) {
            cout << a << " ";
            sum += a;  // Add the prime number to the sum
            counter++;
        }

        a++;
        goto T;
    }

    sum += 2; // Adding the first prime number (2) to the sum
    cout << "\nSum of the first 25 prime numbers: " << sum << endl;



		cout <<"\nwanna repeat the process";
	cin >> m;
		if(m==1)
		{
			goto D;
		}}
		if(n==9)
		{
			int n = 1;
    int u = 1;
    double sum = 0.0; 
    cout << "First 20 elements of the harmonic series: ";

Q: 
    if (u <= 20) 
	{
        double m = 1.0 / n; 
        cout << m << ",";
        sum += m;
        u=u+1;
        n=n+1;
        goto Q; 
    }

    cout << endl << "Sum is " << sum; 
	cout <<"\nwanna repeat the process";
	cin >> m;
		if(m==1)
		{
			goto D;
		}
		return 0;
    }}
    

	
