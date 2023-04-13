import java.util.*;

class Solution{
    public static long solve(int[][] ak,int N,int M,int P){
        long anu=0;
        for(int j=0;j<N;j++){
            int maxiak=Integer.MIN_VALUE;
            for(int i=0;i<M;i++){
                if(ak[i][j]>maxiak)
                    maxiak=ak[i][j];
            }
            anu+=(maxiak-ak[P-1][j]);
        }
        return anu;
    }
    public static void main(String[] agrs){
        Scanner sc=new Scanner(System.in);
        int testCase=sc.nextInt();
        for(int test=1;test<=testCase;test++){
            int M=sc.nextInt();
            int N=sc.nextInt();
            int P=sc.nextInt();
            int[][] ak=new int[M][N];
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    ak[i][j]=sc.nextInt();
                }
            }
            long anu=solve(ak,N,M,P);
            System.out.println("Case #"+test+": "+anu);
        }
    }
}