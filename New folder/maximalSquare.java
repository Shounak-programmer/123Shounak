public class maximalSquare {

    public int MaximalSquare(char[][] matrix) {
        if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
            return 0;
        }

        int rows = matrix.length;
        int cols = matrix[0].length;
        int[][] dp = new int[rows][cols];
        int maxSide = 0;

        initializeFirstRowAndColumn(matrix, dp);
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '1') {
                    updateDpCell(dp, i, j);
                    maxSide = Math.max(maxSide, dp[i][j]);
                }
            }
        }

        return calculateMaxSquareArea(maxSide);
    }

    private void initializeFirstRowAndColumn(char[][] matrix, int[][] dp) {
        for (int i = 0; i < matrix.length; i++) {
            if (matrix[i][0] == '1') {
                dp[i][0] = 1;
            }
        }
        for (int j = 0; j < matrix[0].length; j++) {
            if (matrix[0][j] == '1') {
                dp[0][j] = 1;
            }
        }
    }

    private void updateDpCell(int[][] dp, int i, int j) {
        if (i > 0 && j > 0) {
            dp[i][j] = Math.min(Math.min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
        }
    }

    private int calculateMaxSquareArea(int maxSide) {
        return maxSide * maxSide;
    }

    public static void main(String[] args) {
        maximalSquare solution = new maximalSquare();
        char[][] matrix = {
            {'1', '0', '1', '0', '0'},
            {'1', '0', '1', '1', '1'},
            {'1', '1', '1', '1', '1'},
            {'1', '0', '0', '1', '0'}
        };
        System.out.println("Maximal square area: " + solution.MaximalSquare(matrix));
    }
}
