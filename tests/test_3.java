
//testcases for checking operators.

public class test_3 {
  public static int countDown(int number){   
    if(number==0){
      return 0;
    }
    else return countDown(number-1);
  }
  public static int main(){
    int x=10;
    return countDown(x);
  }
}
