public class test_4 {

    static int printFibonacci(int count,int n1,int n2,int n3){    
        if(count>0){    
             n3 = n1 + n2;    
             n1 = n2;    
             n2 = n3;    
             printFibonacci(count-1,n1,n2,n3);    
             return 0;
         }    
         else return 0;
     }    

    public static int main(){
        int count=10; 
        int n1=0,n2=1,n3=0;    
        printFibonacci(count-2,n1,n2,n3);
        return 0;
    }
}
