// testcase for recursion

package tests;

public class test_3 
{
    public static void main(int args) 
    {
        int result = sum(10);
        System.out.println(result);
    }
    public static int sum(int k) {
      if (k > 0) {
        return k + sum(k - 1);
      } else {
        return 0;
      }
    }
}