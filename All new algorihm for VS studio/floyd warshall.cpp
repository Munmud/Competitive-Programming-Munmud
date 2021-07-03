
// defining the number of vertices
#define nV 4

// Implementing floyd warshall algorithm
void floydWarshall(int matrix[][nV]) {


  // Adding vertices individually
  for (int k = 0; k < nV; k++) {
    for (int i = 0; i < nV; i++) {
      for (int j = 0; j < nV; j++) {
        if (matrix[i][k] + matrix[k][j] < matrix[i][j])
          matrix[i][j] = matrix[i][k] + matrix[k][j];
      }
    }
  }
}