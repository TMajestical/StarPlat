#include<iostream>
#include<iomanip>
#include<fstream>
#include<vector>
#include<set>
#include<algorithm>
#include<execution>
#include<cassert>
#include<string>
#include<random>
#include<cmath>
#include<algorithm>
#include<typeinfo>
#include<chrono>
#include<sstream>
#include "graph.cpp"

#include<omp.h>
//#include<bits/stdc++.h>

using namespace std;

/*
Features:

    * Flexibility : Num layers,layer sizes, activations (Linear, Sigmoid, ReLu, Tanh), Optimisers (Adam, Nadam, RMSProp).
    * Numerical Stability.
    * Repeatability of results.

V2 updates:

    * Aggregation on inputs rather than on outputs of hidden layers, so that it happens for the input layer as well.

*/

/*
Class to supply functions that perform Linear Transforms(MUL,ADD,SUB,Hadamard,Outer,MatrixVector Product), Linear Combinations, Non Linear transforms(Square, Square root etc) 
*/
class TensorTransforms
{

    public:
        // Function to multiply A[cur_row:cur_row+batch_size][k] with B[k][m] and return the result.
        template <typename T> //works only for numeric datatypes
        static vector<vector<T>> Mul(vector<vector<T>> &A,vector<vector<T>> &B, int cur_row, int batch_size = 1);

        // Function to add or subtract two matrices [overloaded]
        // Subtraction if multiplier is -1
        template <typename T> //works only for numeric datatypes
        static void Add(vector<T> &A,const vector<T> &B,double multiplier = 1);

        // Function to add or subtract two matrices [overloaded]
        // Subtraction if multiplier is -1
        template <typename T> //works only for numeric datatypes
        static void Add(vector<vector<T>> &A,const vector<vector<T>> &B,int multiplier = 1);

        // Function to add or subtract two tensors [overloaded]
        //if multiplier is -1, it becomes matrix subtraction.
        template <typename T> //works only for numeric datatypes
        static void Add(vector<vector<vector<T>>> &A,const vector<vector<vector<T>>> &B,int multiplier = 1);

        // Function to add a vector V2 to every row of matrix V1
        template <typename T> //works only for numeric datatypes
        static void Add(vector<vector<T>> &v1,vector<T> &v2);

        // Function to add constant to all values of a vector.
        template <typename T> //works only for numeric datatypes
        static void Add(vector<T> &V,T val);

        // Function to add constant to all values of a matrix. [overloaded]
        template <typename T> //works only for numeric datatypes
        static void Add(vector<vector<T>> &matrix,T val);

        // Function to add constant to all values of a Tensor. [overloaded]
        template <typename T> //works only for numeric datatypes
        static void Add(vector<vector<vector<T>>> &tensor,T val);

        //Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are vectors
        static vector<double> LinearCombination(vector<double> &v1,double c1,vector<double> &v2,double c2);

        //Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are vectors
        //In place LinearCombination : results stored in the first parameter
        static void LinearCombination_(vector<double> &v1,double c1,vector<double> &v2,double c2);

        //Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are Matrices [overloaded]
        static vector<vector<double>> LinearCombination(vector<vector<double>> &v1,double c1,vector<vector<double>> &v2,double c2);

        //Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are Matrices [overloaded]
        //In place LinearCombination : results stored in the first parameter
        static void LinearCombination_(vector<vector<double>> &v1,double c1,vector<vector<double>> &v2,double c2);

        //Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are TENSORS [overloaded]
        static vector<vector<vector<double>>> LinearCombination(vector<vector<vector<double>>> &v1,double c1,vector<vector<vector<double>>> &v2,double c2);

        //Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are TENSORS [overloaded]
        //In place LinearCombination : results stored in the first parameter
        static void LinearCombination_(vector<vector<vector<double>>> &v1,double c1,vector<vector<vector<double>>> &v2,double c2);

        //Function to multiply all values in a matrix by a scalar, inplace. [overloading]
        template <typename T> //works only for numeric datatypes
        static vector<T> Scale(vector<T> &v,T val);

        //Function to multiply all values in a matrix by a scalar, inplace. [overloaded]
        template <typename T> //works only for numeric datatypes
        static void Scale(vector<vector<T>> &matrix,T val);

        //Function to multiply all values in a tensor by a scalar, inplace. [overloaded]
        template <typename T> //works only for numeric datatypes
        static void Scale(vector<vector<vector<T>>> &tensor,T val);

        // Function to compute element wise square Matrix.
        template <typename T> //works only for numeric datatypes
        static void Matrix_sqrt(vector<T> &V);

        // Function to compute element wise square root of a matrix.
        template <typename T> //works only for numeric datatypes
        static void Matrix_sqrt(vector<vector<T>> &matrix);

        // Function to compute element wise square root of a tensor.
        template <typename T> //works only for numeric datatypes
        static void Matrix_sqrt(vector<vector<vector<T>>> &tensor);

        // Function to compute element wise square Matrix.
        template <typename T> //works only for numeric datatypes
        static void Matrix_square(vector<T> &V);

        // Function to compute element wise square root of a matrix.
        template <typename T> //works only for numeric datatypes
        static void Matrix_square(vector<vector<T>> &matrix);

        // Function to compute element wise square root of a tensor.
        template <typename T> //works only for numeric datatypes
        static void Matrix_square(vector<vector<vector<T>>> &tensor);

        //Function to perform element wise division of two vectors
        template <typename T> //works only for numeric datatypes
        static void Matrix_divide(vector<T> &A,vector<T> &B);

        //Function to perform element wise division of two matrices [overloaded]
        template <typename T> //works only for numeric datatypes
        static void Matrix_divide(vector<vector<T>> &A,vector<vector<T>> &B);

        //Function to perform element wise division of two tensors [overloaded]
        template <typename T> //works only for numeric datatypes
        static void Matrix_divide(vector<vector<vector<T>>> &A,vector<vector<vector<T>>> &B);

        // to match types v1 and v2 are vect of vect, but actually they are just 1D vectors
        template <typename T> //works only for numeric datatypes
        static vector<vector<T>> Outer(vector<vector<T>> &v1, vector<T> &v2); //Hi * Ai not Ai * Hi

        // To compute the product of a MxN matrix with Nx1 Vector (vector stored as 1xN)
        template <typename T> //works only for numeric datatypes
        static vector<T> MatrixVectorProduct(vector<vector<T>> &M,vector<T> &V);

        // Function to compute element wise products of two vectors
        // aka Hadamard Product
        template <typename T> //works only for numeric datatypes
        static vector<T> Hadamard(vector<T> &v1, vector<T> &v2);

        // Function to compute element wise products of two vectors
        // aka Hadamard Product
        // In place operation
        template <typename T> //works only for numeric datatypes
        static void Hadamard_(vector<T> &v1, vector<T> &v2);

        //function to overwrite all elements of an existing container with 0s
        template <typename T> //works only for numeric datatypes
        static void fill_with_zeros(vector<T> &M);

        //function to overwrite all elements of an existing container with 0s [overloaded]
        template <typename T> //works only for numeric datatypes
        static void fill_with_zeros(vector<vector<T>> &M);

        //function to overwrite all elements of an existing container with 0s [overloaded]
        template <typename T> //works only for numeric datatypes
        static void fill_with_zeros(vector<vector<vector<T>>> &M);

};

// Fundamental Matrix Operations : Matrix Multiplications, Additions, Addition with scalar and scaling.
/**********************************************************************************/

// Function to multiply A[cur_row:cur_row+batch_size][k] with B[k][m] and return the result.
template <typename T> //works only for numeric datatypes
vector<vector<T>> TensorTransforms::Mul(vector<vector<T>> &A,vector<vector<T>> &B, int cur_row, int batch_size)
/*
Description:
    performs A[cur_row:cur_row+batch_size] * B
*/
{
    assert(cur_row<A.size()); //sanity check

    auto n = cur_row + batch_size;
    auto k = A[0].size();
    auto m = B[0].size();

    if(n>A.size())
        n = A.size();

    vector<vector<T>> C(batch_size,vector<T>(m,0.0));

    #pragma omp parallel for
    for(auto ii=cur_row;ii<n;ii++)
        for(auto xx=0;xx<k;xx++) 
            for(auto jj=0;jj<m;jj++)
                C[ii-cur_row][jj] += A[ii][xx]*B[xx][jj];
    return C;
}


// Function to add or subtract two vectors
// subtraction, if multiplier is -1
template <typename T> //works only for numeric datatypes
void TensorTransforms::Add(vector<T> &A,const vector<T> &B,double multiplier)
/*
Description:
    performs A + multiplier*B
*/
{
    assert(A.size() == B.size());
    
    #pragma omp parallel for
    for(auto ii=0;ii<A.size();ii++)
        A[ii] += multiplier*B[ii];
}

// Function to add or subtract two matrices [overloaded]
// Subtraction if multiplier is -1
template <typename T> //works only for numeric datatypes
void TensorTransforms::Add(vector<vector<T>> &A,const vector<vector<T>> &B,int multiplier)
/*
Description:
    performs A + multiplier*B;
*/
{

    assert(A.size() == B.size());//sanity check
    assert(A[0].size() == B[0].size());

    auto n = A.size();
    
    #pragma omp parallel for
    for(auto ii=0;ii<n;ii++)
        for(auto jj=0;jj<A[ii].size();jj++)
                A[ii][jj] += multiplier*B[ii][jj];
}

// Function to add or subtract two tensors [overloaded]
//if multiplier is -1, it becomes matrix subtraction.
template <typename T> //works only for numeric datatypes
void TensorTransforms::Add(vector<vector<vector<T>>> &A,const vector<vector<vector<T>>> &B,int multiplier)
/*
Description:
    performs A + multiplier*B;
*/
{

    assert(A.size() == B.size());
    
    auto n = A.size();
    
    #pragma omp parallel for
    for(auto ii=0;ii<n;ii++)
    {
        assert(A[ii].size() == B[ii].size());
        for(auto jj=0;jj<A[ii].size();jj++)
            for(auto kk=0;kk<A[ii][jj].size();kk++)
                A[ii][jj][kk] += multiplier*B[ii][jj][kk];
    }
}

// Function to add a vector V2 to every row of matrix V1
template <typename T> //works only for numeric datatypes
void TensorTransforms::Add(vector<vector<T>> &v1,vector<T> &v2)
/*
Description:
    performs A + multiplier*B;
*/
{   
    #pragma omp parallel for
    for(auto &row : v1)
        transform(row.begin(),row.end(),v2.begin(),row.begin(), plus<T>());
}

// Function to add constant to all values of a vector.
template <typename T> //works only for numeric datatypes
void TensorTransforms::Add(vector<T> &V,T val)
{
        transform(V.begin(),V.end(),V.begin(),
        [val](T & ele) {return ele+ val;});
}

// Function to add constant to all values of a matrix. [overloaded]
template <typename T> //works only for numeric datatypes
void TensorTransforms::Add(vector<vector<T>> &matrix,T val){

    #pragma omp parallel for
    for(auto &row : matrix){
        transform(row.begin(),row.end(),row.begin(),
        [val](T & ele) {return ele+ val;});
    }
}

// Function to add constant to all values of a Tensor. [overloaded]
template <typename T> //works only for numeric datatypes
void TensorTransforms::Add(vector<vector<vector<T>>> &tensor,T val){

    #pragma omp parallel for
    for(auto &matrix : tensor)
        for(auto &row : matrix)
            transform(row.begin(),row.end(),row.begin(),
            [val](T & ele) {return ele+ val;});
}

//Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are vectors
vector<double> TensorTransforms::LinearCombination(vector<double> &v1,double c1,vector<double> &v2,double c2)
{
    assert(v1.size() == v2.size()); //Sanity check

    vector<double> v3(v1.size());

    #pragma omp parallel for
    for(int i = 0;i< v3.size();i++)
        v3[i] = c1*v1[i] + c2*v2[i];

    return v3;
}

//Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are vectors
//In place LinearCombination : results stored in the first parameter
void TensorTransforms::LinearCombination_(vector<double> &v1,double c1,vector<double> &v2,double c2) 
{
    assert(v1.size() == v2.size()); //Sanity check

    #pragma omp parallel for
    for(int i = 0;i< v1.size();i++)
        v1[i] = c1*v1[i] + c2*v2[i];

}

//Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are Matrices [overloaded]
vector<vector<double>> TensorTransforms::LinearCombination(vector<vector<double>> &v1,double c1,vector<vector<double>> &v2,double c2)
{
    assert(v1.size() == v2.size()); //Sanity check
    assert(v1.size()>0);
    assert(v1[0].size() == v2[0].size());

    vector<vector<double>> v3 = v1;
    
    #pragma omp parallel for
    for(int i=0;i<v3.size();i++)
        transform(v3[i].begin(),v3[i].end(),v2[i].begin(),v3[i].begin(),
        [c1,c2](double v3_ele,double v2_ele){
            return c1*v3_ele + c2*v2_ele;
        });

    return v3;
}

//Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are Matrices [overloaded]
//In place LinearCombination : results stored in the first parameter
void TensorTransforms::LinearCombination_(vector<vector<double>> &v1,double c1,vector<vector<double>> &v2,double c2)
{
    assert(v1.size() == v2.size()); //Sanity check
    assert(v1.size()>0);
    assert(v1[0].size() == v2[0].size());

    #pragma omp parallel for
    for(int i=0;i<v1.size();i++)
        transform(v1[i].begin(),v1[i].end(),v2[i].begin(),v1[i].begin(),
        [c1,c2](double v1_ele,double v2_ele){
            return c1*v1_ele + c2*v2_ele;
        });

}

//Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are TENSORS [overloaded]
vector<vector<vector<double>>> TensorTransforms::LinearCombination(vector<vector<vector<double>>> &v1,double c1,vector<vector<vector<double>>> &v2,double c2)
{
    assert(v1.size() == v2.size()); //Sanity check
    assert(v1.size()>0);
    
    vector<vector<vector<double>>> v3 = v1;


    for(int i=0;i<v3.size();i++)
    {
        #pragma omp parallel for
        for(int j=0;j<v3[i].size();j++)
        {
            transform(v3[i][j].begin(),v3[i][j].end(),v2[i][j].begin(),v3[i][j].begin(),
            [c1,c2](double v3_ele,double v2_ele){
                return c1*v3_ele + c2*v2_ele;
            });
        }
    }

    return v3;
}

//Function to compute and return c1*v1 + c2*v2, c1 and c2 are scalars, v1&v2 are TENSORS [overloaded]
//In place LinearCombination : results stored in the first parameter
void TensorTransforms::LinearCombination_(vector<vector<vector<double>>> &v1,double c1,vector<vector<vector<double>>> &v2,double c2)
{
    assert(v1.size() == v2.size()); //Sanity check
    assert(v1.size()>0);
    
    for(int i=0;i<v1.size();i++)
    {
        #pragma omp parallel for //the performance is better on Large Datasets when the inner loop is parallel
        for(int j=0;j<v1[i].size();j++)
        {
            transform(v1[i][j].begin(),v1[i][j].end(),v2[i][j].begin(),v1[i][j].begin(),
            [c1,c2](double v1_ele,double v2_ele){
                return c1*v1_ele + c2*v2_ele;
            });
        }
    }

}


//Function to multiply all values in a matrix by a scalar, inplace. [overloading]
template <typename T> //works only for numeric datatypes
vector<T> TensorTransforms::Scale(vector<T> &v,T val)
{
        vector<T> res(v.size(),0);

        transform(v.begin(),v.end(),res.begin(),
        [val](T & ele) {return ele* val;});

    return res;
}

//Function to multiply all values in a matrix by a scalar, inplace. [overloaded]
template <typename T> //works only for numeric datatypes
void TensorTransforms::Scale(vector<vector<T>> &matrix,T val){
    
    #pragma omp parallel for
    for(auto &row : matrix)
        transform(row.begin(),row.end(),row.begin(),
        [val](T & ele) {return ele* val;});
}

//Function to multiply all values in a tensor by a scalar, inplace. [overloaded]
template <typename T> //works only for numeric datatypes
void TensorTransforms::Scale(vector<vector<vector<T>>> &tensor,T val){

    #pragma omp parallel for
    for(auto &matrix : tensor)
        for(auto &row : matrix)
            transform(row.begin(),row.end(),row.begin(),
            [val](T & ele) {return ele* val;});
}

// Function to compute element wise square Matrix.
template <typename T> //works only for numeric datatypes
void TensorTransforms::Matrix_sqrt(vector<T> &V)
{
        std::transform(V.begin(), V.end(), V.begin(), [](T val) 
        {
            return std::sqrt(val);
        });
}


// Function to compute element wise square root of a matrix.
template <typename T> //works only for numeric datatypes
void TensorTransforms::Matrix_sqrt(vector<vector<T>> &matrix)
{
    #pragma omp parallel for
    for (auto& row : matrix) {
        transform(row.begin(), row.end(), row.begin(), [](T val) {
            return std::sqrt(val);
        });
    }
}

// Function to compute element wise square root of a tensor.
template <typename T> //works only for numeric datatypes
void TensorTransforms::Matrix_sqrt(vector<vector<vector<T>>> &tensor)
{    
    #pragma omp parallel for
    for(auto &matrix : tensor)   
        for (auto& row : matrix)
            transform(row.begin(), row.end(), row.begin(), [](T val) {
                return std::sqrt(val);
            });
}

// Function to compute element wise square Matrix.
template <typename T> //works only for numeric datatypes
void TensorTransforms::Matrix_square(vector<T> &V)
{
        std::transform(V.begin(), V.end(), V.begin(), [](T val) 
        {
            return val*val;
        });
}


// Function to compute element wise square root of a matrix.
template <typename T> //works only for numeric datatypes
void TensorTransforms::Matrix_square(vector<vector<T>> &matrix)
{

    #pragma omp parallel for
    for (auto& row : matrix) {
        transform(row.begin(), row.end(), row.begin(), [](T val) {
            return val*val;
        });
    }
}

// Function to compute element wise square root of a tensor.
template <typename T> //works only for numeric datatypes
void TensorTransforms::Matrix_square(vector<vector<vector<T>>> &tensor)
{    
    #pragma omp parallel for
    for(auto &matrix : tensor)   
        for (auto& row : matrix)
            transform(row.begin(), row.end(), row.begin(), [](T val) {
                return val*val;
            });
}

//Function to perform element wise division of two vectors
template <typename T> //works only for numeric datatypes
void TensorTransforms::Matrix_divide(vector<T> &A,vector<T> &B)
{
        std::transform(A.begin(), A.end(), B.begin(), A.begin(), std::divides<T>());
}

//Function to perform element wise division of two matrices [overloaded]
template <typename T> //works only for numeric datatypes
void TensorTransforms::Matrix_divide(vector<vector<T>> &A,vector<vector<T>> &B)
{
    #pragma omp parallel for
    for (int i = 0; i < A.size(); i++)
        std::transform(A[i].begin(), A[i].end(), B[i].begin(), A[i].begin(), std::divides<T>());
}

//Function to perform element wise division of two tensors [overloaded]
template <typename T> //works only for numeric datatypes
void TensorTransforms::Matrix_divide(vector<vector<vector<T>>> &A,vector<vector<vector<T>>> &B)
{
    #pragma omp parallel for
    for(int i = 0; i < A.size(); i++)
        for(int j = 0; j < A[i].size(); j++)
            std::transform(A[i][j].begin(), A[i][j].end(), B[i][j].begin(), A[i][j].begin(), std::divides<T>());
}

// to match types v1 and v2 are vect of vect, but actually they are just 1D vectors
template <typename T> //works only for numeric datatypes
//Hi * Ai not Ai * Hi
vector<vector<T>> TensorTransforms::Outer(vector<vector<T>> &v1, vector<T> &v2)
{
    vector<vector<T>> result(v1[0].size(),vector<T>(v2.size(),0));
    
    #pragma omp parallel for
    for(int i=0;i<v1[0].size();i++)
    {
        auto ele = v1[0][i];
        for(int j=0;j<v2.size();j++)
        {
            result[i][j] += ele*v2[j];
        }
    }
    return result;

}

// To compute the product of a MxN matrix with Nx1 Vector (vector stored as 1xN)
template <typename T> //works only for numeric datatypes
vector<T> TensorTransforms::MatrixVectorProduct(vector<vector<T>> &M,vector<T> &V)
{
    assert(M[0].size() == V.size());

    vector<T> res(M.size());

    #pragma omp parallel for
    for(int i=0;i<M.size();i++)
        for(int j=0;j<M[0].size();j++)
            res[i] += M[i][j]*V[j];

    return res;

}

// Function to compute element wise products of two vectors
// aka Hadamard Product
template <typename T> //works only for numeric datatypes
vector<T> TensorTransforms::Hadamard(vector<T> &v1, vector<T> &v2)
{
    assert(v1.size() == v2.size());

    vector<T> v3(v1);
    #pragma omp parallel for
    for(int i=0;i<v1.size();i++)
        v3[i] = v1[i]*v2[i];

    return v3;

}

// Function to compute element wise products of two vectors
// aka Hadamard Product
// In place operation
template <typename T> //works only for numeric datatypes
void TensorTransforms::Hadamard_(vector<T> &v1, vector<T> &v2)
{
    assert(v1.size() == v2.size());

    vector<T> v3(v1);
    #pragma omp parallel for
    for(int i=0;i<v1.size();i++)
        v1[i] = v1[i]*v2[i];

}

//function to overwrite all elements of an existing container with 0s
template <typename T> //works only for numeric datatypes
void TensorTransforms::fill_with_zeros(vector<T> &M)
{
    if(M.size()==0)
        return;
    
    #pragma omp parallel for
    for(int i=0;i<M.size();i++)
        M[i] = 0;
}

//function to overwrite all elements of an existing container with 0s [overloaded]
template <typename T> //works only for numeric datatypes
void TensorTransforms::fill_with_zeros(vector<vector<T>> &M)
{
    if(M.size()==0)
        return;
    assert(M[0].size()>0);

    /*for(int i=0;i<M.size();i++)
        for(int j=0;j<M[i].size();j++)
            M[i][j] = 0;*/
    
    #pragma omp parallel for
    for(int i=0;i<M.size();i++)
        for(int j=0;j<M[i].size();j++)
            M[i][j] = 0;  
} 

//function to overwrite all elements of an existing container with 0s [overloaded]
template <typename T> //works only for numeric datatypes
void TensorTransforms::fill_with_zeros(vector<vector<vector<T>>> &M)
{
    if(M.size()==0)
        return;

    assert(M[0].size()>0);
    assert(M[0][0].size()>0);

    /*for(int i=0;i<M.size();i++)
        for(int j=0;j<M[i].size();j++)
            for(int k=0;k<M[i][j].size();k++)
            M[i][j][k] = 0;*/

    #pragma omp parallel for
    for(int i=0;i<M.size();i++)
        for(int j=0;j<M[i].size();j++)
            for(int k=0;k<M[i][j].size();k++)
                M[i][j][k] = 0;
}

//Function to find and return the index of the largest element in a vector 
template <typename T> //works only for numeric datatypes
T argmax(vector<T> &V)
{
    assert(!V.empty());
    auto max_ele_pos = max_element(V.begin(),V.end());

    return distance(V.begin(),max_ele_pos);
}

//Function to find and return the index of the largest element in a vector [overloaded]
template <typename T> //works only for numeric datatypes
vector<T> argmax(vector<vector<T>> &V)
{
    vector<T> res(V.size());

    #pragma omp parallel for
    for(int i=0;i<V.size();i++)
    {
        auto max_ele = max_element(V[i].begin(),V[i].end());
        auto amax = distance(V[i].begin(),max_ele);

        res[i] = amax;
    }

    return res;
}

// to compute the total cross entropy loss between the vectors within a vector
template <typename T> //works only for numeric datatypes
double cross_entropy_loss(vector<vector<T>> &pred_probs, vector<int> &true_labels, int vertex)
{
    double loss=0;
    #pragma omp parallel for reduction(+:loss)
    for(int i=0;i<pred_probs.size();i++)
        loss = loss + -(log(pred_probs[i][int(true_labels[vertex])]));

    return loss;
}

// to compute the total cross entropy loss between the vectors within a vector
template <typename T> //works only for numeric datatypes
double cross_entropy_loss(vector<T> &pred_probs, vector<int> &true_labels, int vertex)
{
    double loss=0;
    loss = loss + -(log(pred_probs[int(true_labels[vertex])]));

    return loss;
}

// function to compute accuracy, given the predicted classes preds and true_labels
// preds must be predicted classes
template <typename T> //works only for numeric datatypes
T compute_accuracy(vector<T> &preds, vector<T> &true_labels, int cur_row = -1)
{
    int c = (cur_row == -1)?0:cur_row;

    double correct_preds = 0;

    #pragma omp parallel for reduction(+:correct_preds)
    for(int i =0 ;i<preds.size();i++)
    {
        if(int(preds[i]) == int(true_labels[i+c]))
        {
            correct_preds++;
        }
    }

    double accuracy = (correct_preds*100)/(double(preds.size()));

    return accuracy;
}


//function to print elements of a vector
template <typename T>
void print(vector<T> &V)
{
    for(auto &ele : V)
        cout<<ele<<" ";
    cout<<endl;
}

//function to print elements of a matrix of type T [overloaded]
template <typename T> 
void print(vector<vector<T>> &V)
{
    for(auto &row : V)
        print(row);
    cout<<endl;
}

//function to print elements of a tensor of type T [overloaded]
template <typename T> 
void print(vector<vector<vector<T>>> &V)
{
    for(auto &row : V)
        print(row);
    cout<<endl;
}



/**********************************************************************************/

/*
Layers can be vector<vector<vector<double>>>
Inputs (may be to a constructor) : num layers (int), an array of layer sizes, initialization mech.
Activation and Optimisers can be separate classes

Network class has 
    constructor to create network and initialize the weights.
    Forward Pass.
    Bacward Pass.



*/

vector<int> randomSample(int N, int k) // Function to sample k random indices from 0 to N-1
{
    vector<int> indices(N);
    iota(indices.begin(), indices.end(), 0);

    random_device rd;
    mt19937 gen(rd());

    shuffle(indices.begin(), indices.end(), gen);

    indices.resize(k);
    return indices;
}

// Class that defines the structure of a layer in a neural network.
class Layer
{
    public:
        int size,inp_dim,out_dim;
        vector<vector<double>> weights;
        vector<double> biases;

        Layer(int neurons,int in_dim,int op_dim)
        {
            size = neurons;
            inp_dim = in_dim;
            out_dim = op_dim;
            biases.assign(op_dim,0.01); //Initialize biases to 0.01, a small non zero value.

        }

        //Function to perform xavier_normal initialization.
        void xavier_normal_initialization(int seed = 76)
        {

            int fan_in = inp_dim, fan_out = out_dim;
            double mu = 0; // mean is zero for
            double sigma = sqrt(2.0/(fan_in+fan_out));

            mt19937 gen(seed); //pseudo random number generator, with a seed.
            normal_distribution<double> N(mu,sigma); //mu passed would be 0 and sigma would be as per xavier initialization mech.

            weights.resize(fan_in,vector<double>(fan_out,0)); //Fixing the shape of the weights matrix and initializing with 0s.

            for(int i=0;i<fan_in;i++)
            {
                for(int j=0;j<fan_out;j++)
                    weights[i][j] = N(gen);

            }

        }
};

// Class to support activation functions : to apply after neural network layers.
// Supports : Tanh, ReLU, Softmax

class Activation
{
    public:

        //tanh for batch size = 1
        void Tanh(vector<double> &W)
        {
                transform(W.begin(),W.end(),W.begin(),[](double &element)
                {
                    return tanh(element);   
                });
        }

        //tanh for batch size>1 [overloading]
        void Tanh(vector<vector<double>> &W)
        {
                for(auto &row : W)
                    transform(row.begin(),row.end(),row.begin(),[](double &element)
                    {
                        return tanh(element);   
                    });
        }

        //ReLU for batch size=1
        void ReLU(vector<double> &W)
        {

            auto relu = [](double& element) -> double {
                return (element>0)?element:0;
            };

            transform(W.begin(),W.end(),W.begin(),relu);

        }

        //ReLU for batch size>1 [overloading]
        void ReLU(vector<vector<double>> &W)
        {

            auto relu = [](double& element) -> double {
                return (element>0)?element:0;
            };

            for(auto &row : W)
                transform(row.begin(),row.end(),row.begin(),relu);
        }



        //function to compute the softmax over a vector, with Batch size = 1
        void Softmax(vector<double> &W)
        {
            double sum = 0;//, max = *max_element(W.begin(),W.end());

            for(int i=0;i<W.size();i++)
            {
                W[i] = exp(W[i]);
                sum += W[i];
            }

            for(int i=0;i<W.size();i++)
                W[i]/=sum;
        }

        //function to compute the softmax over a vector, with Batch size>1 [overloading]
        void Softmax(vector<vector<double>> &W)
        {
            for(auto &row : W)
            {
                double sum = 0;//,max = *max_element(row.begin(),row.end());
                for(int i=0;i<row.size();i++)
                {
                    row[i] = exp(row[i]);
                    sum += row[i];
                }

                for(int i=0;i<row.size();i++)
                    row[i]/=sum;
            }
        }
};

//Class to support functions for the gradient of activation functions
class GradActivation
{
    public:
        //gradient of tanh for batch size = 1
        void Tanh_d(vector<double> &W)
        {
                transform(W.begin(),W.end(),W.begin(),[](double &element)
                {
                    return 1-tanh(element)*tanh(element);
                });
        }

        //gradient of tanh for batch size>1 [overloading]
        void Tanh_d(vector<vector<double>> &W)
        {
                for(auto &row : W)
                    transform(row.begin(),row.end(),row.begin(),[](double &element)
                    {
                        return 1-tanh(element)*tanh(element);
                    });
        }

        //gradient of ReLU for batch size=1
        void ReLU_d(vector<double> &W)
        {

            auto relu = [](double& element) -> double 
            {
                return (element>0)?1:0;
            };

            transform(W.begin(),W.end(),W.begin(),relu);

        }

        //gradient of ReLU for batch size>1 [overloading]
        void ReLU_d(vector<vector<double>> &W)
        {

            auto relu = [](double& element) -> double {
                return (element>0)?1:0;
            };

            for(auto &row : W)
                transform(row.begin(),row.end(),row.begin(),relu);
        }

};

class Dataset
{

    /*
    Expects a folder with the following files:

        ../labels.txt : vector of integers
        ../features.txt : vector of double
    */

    public:

        vector<vector<double>> features;
        vector<int> labels;
        vector<int> train_indices;
        vector<int> val_indices;
        vector<int> test_indices;
        graph Graph;

        int num_classes;
        int input_feature_dim;

        template<typename T>
        vector<vector<T>> readMatrix(string filename, const T& dummy_parm) //dummy parameter to deduce the type of the matrix
        {
            ifstream file(filename);
            string line;
            vector<vector<T>> array;
            vector<T> row;

            if (!file.is_open()) 
            {
                cerr << "Error opening file: " << filename << endl;
                return {};  // Return an empty vector if file cannot be opened
            }

            while (getline(file, line)) 
            {
                stringstream ss(line);
                vector<double> row;
                double value;

                while (ss >> value) 
                    row.push_back(value);

                array.push_back(row);
            }

            return array;
        }

        template<typename T>
        vector<T> readArray(string filename, const T& dummy_parm)
        {
            ifstream file(filename);
            vector<T> array;
            T value;

            if (!file.is_open()) 
            {
                cerr << "Error opening file: " << filename << endl;
                return {};  // Return an empty vector if file cannot be opened
            }

            // Read values from the file and store them in the vector
            while (file >> value) 
                array.push_back(value);
            
            return array;

        }
            
        Dataset(string folder_path,graph &inp_graph, double train_ratio = 0.8) : Graph(inp_graph)
        {
            features = readMatrix(folder_path+"/features.txt",(double)0.0);
            labels = readArray(folder_path+"/labels.txt",(int)0);
            train_indices = readArray(folder_path+"/train_indices.txt",(int)0);
            val_indices = readArray(folder_path+"/val_indices.txt",(int)0);
            test_indices = readArray(folder_path+"/test_indices.txt",(int)0);

            set<int> unique_labels;

            for(auto &l:labels)
                unique_labels.insert(l);

            //assuming labels are 0 indexed and consecutive. 
            num_classes = unique_labels.size();
            input_feature_dim = features[0].size();
            
        }

        void printDataStats()
        {
            cout<<"\n Data Reading Complete...\n";
            cout<<"\n\tNumber of vertices \t\t"<<Graph.num_nodes()<<endl;
            cout<<"\n\tNumber of Edges   \t\t"<<Graph.num_edges()<<endl;
            cout<<"\n\tNumber of Labels \t\t"<<labels.size()<<endl;
            cout<<"\n\tNumber of Train Vertices\t"<<train_indices.size()<<endl;
            cout<<"\n\tNumber of Val Vertices\t\t"<<val_indices.size()<<endl;
            cout<<"\n\tNumber of Test Vertices\t\t"<<test_indices.size()<<endl;
            cout<<"\n\tFeature Matrix Size\t\t"<<features.size()<<"x"<<features[0].size()<<endl<<endl;
        }

};

class Optimiser; //forward declaration

// Class to define a NNet model, with supporting methods like forward, backward passes and train functions.
class GNN
{

        public:

            string hidden_activation; //activation applied after hidden layer.
            string output_activation; //output activation.
            string aggregation_type; //either "sum" or "mean"

            vector<Layer> layers;     //A vector of layer class objects
            vector<int> sample_sizes; //sample sizes for each layer.

            Dataset data; //Dataset object to store the data.
            Activation acti;

            vector<vector<vector<double>>> all_Ais, all_His; // 3D vectors to store the states from the forward pass and use it in backward pass.

            vector<vector<vector<double>>> dw; // gradients for weights.
            vector<vector<double>> db; // gradients for biases.

            //to store training stats

            int count;
            double avg_train_loss;
            double correct_predictions;
            double train_accuracy;

            Optimiser *optimiser; //pointer to the optimiser object.

            void processTrainingStats()
            {
                avg_train_loss = avg_train_loss/count;
                train_accuracy = correct_predictions*100/count;
            }

            void recordTrainingStats(vector<double> y_pred_probs,int cur_vertex)
            {                
                int y_true = data.labels[cur_vertex];
                int cur_pred = argmax(y_pred_probs);
                avg_train_loss += cross_entropy_loss(y_pred_probs,data.labels,cur_vertex);
                
                if(cur_pred == y_true)
                    correct_predictions++;
                count++;
            }

            int getNumTrainingVertices()
            {
                return data.train_indices.size();
            }

            void computeTrainingStats()
            {
                avg_train_loss = avg_train_loss/count;
                train_accuracy = correct_predictions*100/count;
            }

            void resetTrainingStats()
            {
                count = 0;
                avg_train_loss = 0;
                correct_predictions = 0;
                train_accuracy = 0;
            }

            void resetGrads()
            {
                TensorTransforms::fill_with_zeros(dw);
                TensorTransforms::fill_with_zeros(db);
            }

            // The constructor of the class : To initialize hyperparameters, create and initialize layers. 
            GNN(vector<int> &hidden_sizes,vector<int> &samp_sizes,string aggr_type,int input_size,int output_size,string h_acti,string op_acti, Dataset &ds) : data(ds)
            {
                
                assert(!hidden_sizes.empty());
                assert(samp_sizes.size() == hidden_sizes.size()+1); //sampling size must be defined for the input and the hidden layers.

                hidden_activation = h_acti;
                output_activation = op_acti;
                sample_sizes = samp_sizes;
                aggregation_type = aggr_type;

                createLayers(hidden_sizes,input_size,output_size);

                //initialize grads of weights and biases to zeros.
                for(int i = 0;i<layers.size();i++)
                {
                    vector<vector<double>> tmp_w(layers[i].inp_dim,vector<double>(layers[i].out_dim,0));
                    dw.push_back(tmp_w);

                    vector<double> tmp_b(layers[i].out_dim,0);
                    db.push_back(tmp_b);
                }

                //initialize the training stats
                count = 0;
                avg_train_loss = 0;
                correct_predictions = 0;
                train_accuracy = 0;

            }

            int getTrainSetSize()
            {
                return data.train_indices.size();
            }
            

            // Function to create the layers of the neural network, based on the input, output sizes and hidden_sizes vector.
            void createLayers(vector<int> &hidden_sizes, int input_size, int output_size)
            {
                for(int i = 0;i<hidden_sizes.size();i++)
                {

                    if(i==0) // The First hidden layer
                    {
                        Layer layer(hidden_sizes[i],input_size,hidden_sizes[i]);
                        layers.push_back(layer);
                    }
                    else // All (but last) hidden layers
                    {
                        Layer layer(hidden_sizes[i],hidden_sizes[i-1],hidden_sizes[i]);
                        layers.push_back(layer);
                    }

                }

                Layer layer(output_size,hidden_sizes.back(),output_size); //last hidden layer
                layers.push_back(layer);
            }

            // Function to initialize the weights of the network
            // Weights are initialized using Xavier initialization and biases are initialized to zeros.
            void InitializeWeights(int seed = 76)
            {
                for(auto &layer : layers)
                    layer.xavier_normal_initialization(seed);
            }

            // Function to perform the forward pass/propagation
            // As of now works for batch_size=1 only [can be updagraded]
            // It stores the states i.e pre-activation outputs of all hidden layers in "all_Ais"
            // and post-activation outputs of all hidden layers and output in "all_His"
            // returns the predicted probabilities

            vector<double> forward(int current_vertex, int batch_size = 1, int test_mode = 0)
            {
                //to make sure older data (if any) is cleared.
                all_Ais.clear();
                all_His.clear();

                auto node_neighs = data.Graph.getNeighbors(current_vertex);
                int NH_size = node_neighs.size();

                // cout<<"\t\tNeighbourhood size : "<<NH_size<<endl;

                vector<vector<double>> NH_data(NH_size+1,vector<double>(data.features[0].size(),0)); //NH_data initall stores the RAW features of the neighbourhood vertices.
                //last row of NH_data is always the feature of the current vertex.

                //extracting the features of the neighbourhood vertices.
                for(int i=0;i<node_neighs.size();i++)
                    NH_data[i] = data.features[node_neighs[i].destination];
                NH_data[NH_size] = data.features[current_vertex]; //last row is the feature of the current vertex.

                int cur_vertex_index = NH_size; //index of the current vertex after remapping.
                int NH_batch_size = NH_size+1; // NH includes the vertex iteself. These are processed as a batch.
                int batch_start_index = 0; //entire batch has to be processed, hence starting row is 0.
                
                //this assumes that batch size is restricted to 1.
                //auto data_row = features[current_vertex];

                vector<vector<double>> output;

                if(!test_mode) //no need to store state vectors for inference
                {
                    vector<vector<double>> cur_data_row;
                    cur_data_row.push_back(NH_data[cur_vertex_index]);
                    all_His.push_back(cur_data_row); //all_His[0] should be the relevant input data
                }

                for(int i =0; i<layers.size(); i++)
                {
                    
                    //SAmping and AGgregation (SAGE is here!)
                    int sample_size = min(sample_sizes[i],NH_size); //sample size for the current layer.
                    auto sampled_neighbours = randomSample(NH_size,sample_size); //sampling batch_size number of vertices from the neighbourhood
                    vector<double> agg_vector(NH_data[cur_vertex_index]); //initialize the aggregation vector the (transformed) feature of the current vertex.
                    //factor is 1 for sum and 1/(number of sampled neighbours + 1) for mean aggregation.
                    double factor = 1.0;
                    if(aggregation_type == "mean")
                        factor = 1.0/(sampled_neighbours.size()+1); //denominator for mean aggregation

                    TensorTransforms::Scale(agg_vector,factor); //scale the aggregation vector by the factor.

                    for(auto &neigh : sampled_neighbours)
                        TensorTransforms::Add(agg_vector,NH_data[neigh],factor); //add the feature of the sampled neighbour to the aggregation vector.

                    NH_data[cur_vertex_index] = agg_vector; //replace the feature of the current vertex with the aggregated feature.
                    
                    NH_data = TensorTransforms::Mul(NH_data,layers[i].weights,batch_start_index,NH_batch_size); //NH_size because the last row is the feature of the current vertex of interest in the neighbourhood.
                    
                    TensorTransforms::Add(NH_data,layers[i].biases); // xTw + b transformation

                    if(!test_mode) //store meta info while training only
                    {
                        vector<vector<double>> tmp_Ai;
                        tmp_Ai.push_back(NH_data[cur_vertex_index]);
                        all_Ais.push_back(tmp_Ai);
                    }

                    if(i<layers.size()-1) //for all hidden layers
                    {
                        if(hidden_activation == "tanh")
                            acti.Tanh(NH_data);
                        else if(hidden_activation == "relu")
                            acti.ReLU(NH_data);

                    }
                    else //for output layer
                        acti.Softmax(NH_data); //softmax for the current vertex of interest.
                    
                    if(!test_mode) //store meta info while training only
                    {
                        vector<vector<double>> tmp_Ai;
                        tmp_Ai.push_back(NH_data[cur_vertex_index]);
                        all_His.push_back(tmp_Ai);
                    }

                    if (i == layers.size()-1)  //store the predicted probabilities
                        output.push_back(NH_data[cur_vertex_index]); //store the output probabilities.
                }

                recordTrainingStats(output[0],current_vertex); //record prediction to compute training loss and accuracy.

                return output[0]; //return prediction probabilities
                
            }

            // Performs the backward propagation algorithm over the neural net
            // uses the state vectors "all_Ais" and "all_His" from forward pass
            // and stores gradients in "dw_list" and "db_list"
            // due to the reverse order, the dw_list[0] would correspond to gradients of output layer and so on.
            // NOTE : Auto-differentiation is not used, instead we limit to problem of multi-class classification [with cross entropy loss]
            // and using closed form expressions of the gradients and the activations
            // currently supported activations : tanh, ReLU, softmax
            void backprop(int current_vertex,vector<double> &y_pred)
            {

                GradActivation activ_grad;

                //dw_list.clear(); //to make sure any older data is removed.
                //db_list.clear();
                
                //reverse(dw_list.begin(),dw_list.end());
                //reverse(db_list.begin(),db_list.end());

                //assuming batch size = 1

                int y_true = data.labels[current_vertex]; //true label of the current vertex

                
                auto grad_aL = y_pred;
                
                grad_aL[int(y_true)] = y_pred[int(y_true)]-1;

                auto grad_ai = grad_aL;

                for(int i=layers.size()-1;i>=0;i--) //iterate over each hidden layer backwards : backprop
                {
                    //dw_list.push_back(TensorTransforms::Outer(all_His[i],grad_ai));
                    //db_list.push_back(grad_ai); //gradient of biases = grad_ai

                    if(i>0) // if a previous layer exists, back propagate.
                    {
                        vector<double> grad_h_prev = TensorTransforms::MatrixVectorProduct(layers[i].weights,grad_ai);
                        vector<double> grad_a_prev(grad_h_prev.size()); //dimension of hi=ai always

                        auto prev_layer_ai_grad = all_Ais[i-1];

                        if(hidden_activation == "tanh")
                            activ_grad.Tanh_d(prev_layer_ai_grad);

                        else if(hidden_activation == "relu")
                            activ_grad.ReLU_d(prev_layer_ai_grad);

                        grad_a_prev = TensorTransforms::Hadamard(grad_h_prev , prev_layer_ai_grad[0]); //prev_layer_ai_grad is a vector of 1 vector, we just need a vector;

                        // dw_list[i] = std::move(TensorTransforms::Outer(all_His[i],grad_ai));
                        // db_list[i] = std::move(grad_ai); //gradient of biases = grad_ai

                        auto dw_cur = std::move(TensorTransforms::Outer(all_His[i],grad_ai));

                        TensorTransforms::Add(dw[i],dw_cur); //accumulate the gradients of weights
                        TensorTransforms::Add(db[i],grad_ai); //accumulate the gradients of biases

                        grad_ai = grad_a_prev;
                    }

                    else
                    {
                        auto dw_cur = std::move(TensorTransforms::Outer(all_His[i],grad_ai));
                        TensorTransforms::Add(dw[i],dw_cur); //accumulate the gradients of weights
                        TensorTransforms::Add(db[i],grad_ai); //accumulate the gradients of biases
                    }
                }
            }

            // Function to print the weights of a given layer l of the network
            void PrintWeights(int l)
            {
                for(int i=0;i<layers[l].inp_dim;i++)
                {
                    for(int j=0;j<layers[l].out_dim;j++)
                        cout<<layers[l].weights[i][j]<<" ";
                    cout<<"\n";
                }
                cout<<endl;
            }


            // Function to print the model architecture.
            void printArchitecture()
            {
                cout<<"\n============================================ Network Architecture ============================================\n\n";
                cout<<"Number of Layers : "<<layers.size()<<endl<<endl;
                
                cout<<"Layer : 0(inp)\t Neurons : "<<layers[0].inp_dim<<"\t Dim : NA\t Params : NA\n\n";
                
                long long total_params = 0;
                for(int i =0;i<layers.size();i++)
                {
                    long long params = 0;
                    params += layers[i].inp_dim*layers[i].out_dim; //weights matrix
                    params += layers[i].out_dim; //biases
                    total_params += params;

                    cout<<"Layer : "<<i+1<<"\t Neurons : "<<layers[i].size<<"\t Dim : "<<layers[i].inp_dim<<"x"<<layers[i].out_dim<<"\t Params : "<<params<<endl;
                    
                    if(i < layers.size()-1)
                        cout<<hidden_activation<<" Activation\n"<<endl;
                    else
                        cout<<output_activation<<" Activation\n"<<endl;
                }
                cout<<"Total Params : "<<total_params<<endl;
                cout<<"\n==============================================================================================================\n";
            }

            //function to print the dimensions of the weights of all layers
            void printWeightDims()
            {
                for(int i=0;i<layers.size();i++)
                {
                    cout<<"\t\tCur layer("<<i<<") Weights dim : "<<layers[i].weights.size()<<"x"<<layers[i].weights[0].size()<<"\n";
                }
            }

            //function to print the dimensions of any matrix stored as a vector<vector<double>>
            void printDims(vector<vector<double>> &V)
            {
                for(auto &row : V)
                {
                    cout<<"\t\tdim : "<<row.size()<<"\n";
                }
            }

            //function to print the dimensions of any matrix stored as a vector<vector<vector<double>>>
            void printDims(vector<vector<vector<double>>> &V)
            {
                for(int i=0;i<V.size();i++)
                        cout<<"\t\tdim : "<<V[i].size()<<"x"<<V[i][0].size()<<"\n";
            }

            int getTrainVertexId(int index)
            {
                return data.train_indices[index];
            }

            void displayEpochStats();
            void testModel();
            void setOptimiser(char*,double,double);
            void optimiser_step();
            void evaluateModel();


};


// Class to implement the optimization algorithms, for training the neural net
// Supports  : Stochastic and Batch GD, Momentum based GD, RMSprop and Adam.
class Optimiser
{
    public:

        GNN &model;
        double lr; //learning rate
        double l2_param; //LR reg.

        Optimiser(GNN &m, double learning_rate, double l2_param = 0) : model(m)
        {
            lr = learning_rate;
            l2_param = l2_param;
        }

        //Function to gather the predictions of the model on the data (X,Y) and print the stats (accuracy and loss).
        void evaluateModel(string dtype, bool print_stats = true, int test_mode = 1)
        {

            double correct_preds = 0;
            double avg_loss = 0;

            Activation activ;

            vector<int> vertex_indices;
            if(dtype == "Val")
                vertex_indices = model.data.val_indices;
            else if(dtype == "Test")
                vertex_indices = model.data.test_indices;

            for(auto &cur_vertex : vertex_indices)
            {
                //auto current_row = cur;
                int batch_size = 1;
                auto y_pred_probs = model.forward(cur_vertex, batch_size,test_mode); //forward pass works on one sample at time
                
                
                //to compute accuracy later.
                auto cur_prediction = argmax(y_pred_probs);

                if(int(cur_prediction) == int(model.data.labels[cur_vertex]))
                    correct_preds++;

                avg_loss += cross_entropy_loss(y_pred_probs,model.data.labels,cur_vertex);

            }

            double accuracy = correct_preds*100/vertex_indices.size();
            cout<<dtype<<" Acc. : "<<accuracy<<fixed<<setprecision(2)<<"% Avg. "<<dtype<<" Loss : "<<fixed<<setprecision(2)<<avg_loss/vertex_indices.size()<<" ";

        }

        void displayEpochStats()
        {
            model.processTrainingStats();
            cout<<" Train Acc. : "<<model.train_accuracy<<fixed<<setprecision(2)<<"% Avg. Train Loss : "<<fixed<<setprecision(2)<<model.avg_train_loss<<" "<<flush;
            evaluateModel("Val");
            model.resetTrainingStats();
        }

        void virtual step() = 0;


};


class SGD : public Optimiser
{
    public:

        SGD(GNN &m, double learning_rate, double l2_param) : Optimiser(m,learning_rate,l2_param) {}
        
        // Function to implement the stochastic gradient descent algorithm.
        void step()
        {

            for(int l=0;l<model.layers.size();l++)
            {
                TensorTransforms::Scale(model.dw[l],lr*(1+l2_param));
                TensorTransforms::Add(model.layers[l].weights,model.dw[l],-1);

                TensorTransforms::Scale(model.db[l],lr*(1+l2_param));
                TensorTransforms::Add(model.layers[l].biases,model.db[l],-1);
            }

            TensorTransforms::fill_with_zeros(model.dw);
            TensorTransforms::fill_with_zeros(model.db);

        }

};

class MomentumGD : public Optimiser
{
    public:

        //algorithm parameters
        double momentum;

        //algorithm state tensors
        vector<vector<vector<double>>> prev_uw;
        vector<vector<double>> prev_ub;

        MomentumGD(GNN &m, double learning_rate, double l2_param, double Momentum = 0.9) : Optimiser(m,learning_rate,l2_param), prev_uw(model.dw), prev_ub(model.db)
        {
            TensorTransforms::fill_with_zeros(prev_uw);
            TensorTransforms::fill_with_zeros(prev_ub);
            
            momentum = Momentum;
        }


        // Function to implement the Momentum based stochastic gradient descent algorithm.
        void step()
        {

            // auto uw = TensorTransforms::LinearCombination(prev_uw,momentum,model.dw,lr);
            // auto ub = TensorTransforms::LinearCombination(prev_ub,momentum,model.db,lr);

            // auto temp_uw = TensorTransforms::LinearCombination(uw,1,model.dw,lr*l2_param);
            // auto temp_ub = TensorTransforms::LinearCombination(ub,1,model.db,lr*l2_param);

            auto uw = prev_uw;
            auto ub = prev_ub;

            TensorTransforms::LinearCombination_(uw,momentum,model.dw,lr);
            TensorTransforms::LinearCombination_(ub,momentum,model.db,lr);

            auto temp_uw = uw;
            auto temp_ub = ub;

            TensorTransforms::LinearCombination_(temp_uw,1,model.dw,lr*l2_param);
            TensorTransforms::LinearCombination_(temp_ub,1,model.db,lr*l2_param);

            for(int l=0;l<model.layers.size();l++)
            {
                TensorTransforms::Add(model.layers[l].weights,temp_uw[l],-1);
                TensorTransforms::Add(model.layers[l].biases,temp_ub[l],-1);
            }

            prev_uw = uw;
            prev_ub = ub;

            TensorTransforms::fill_with_zeros(model.dw);
            TensorTransforms::fill_with_zeros(model.db);

        }


};

class RMSprop : public Optimiser
{
    public:
        
        //algorithm parameters
        double beta;
        double epsilon;

        //algorithm state tensors
        vector<vector<vector<double>>> v_w;
        vector<vector<double>> v_b;

        RMSprop(GNN &m, double learning_rate, double l2_param, double Beta = 0.5, double epsi = 1e-4) : Optimiser(m,learning_rate,l2_param), v_w(model.dw), v_b(model.db)
        {
            TensorTransforms::fill_with_zeros(v_w);
            TensorTransforms::fill_with_zeros(v_b);

            beta = Beta;
            epsilon = epsi;
        }

        // Function to implement a step of the RMSprop algorithm.
        void step()
        {

            auto dw_tmp = model.dw;
            auto db_tmp = model.db;

            TensorTransforms::Matrix_square(dw_tmp);
            TensorTransforms::Matrix_square(db_tmp);

            // v_w = TensorTransforms::LinearCombination(v_w,beta,dw_tmp,1-beta);
            // v_b = TensorTransforms::LinearCombination(v_b,beta,db_tmp,1-beta);

            TensorTransforms::LinearCombination_(v_w,beta,dw_tmp,1-beta);
            TensorTransforms::LinearCombination_(v_b,beta,db_tmp,1-beta);
            
            auto vw_denominator = v_w;
            auto vb_denominator = v_b;

            TensorTransforms::Matrix_sqrt(vw_denominator);
            TensorTransforms::Matrix_sqrt(vb_denominator);

            TensorTransforms::Add(vw_denominator,epsilon);
            TensorTransforms::Add(vb_denominator,epsilon);

            dw_tmp = model.dw;
            db_tmp = model.db;

            TensorTransforms::Matrix_divide(dw_tmp,vw_denominator);
            TensorTransforms::Matrix_divide(db_tmp,vb_denominator);

            // dw_tmp = TensorTransforms::LinearCombination(dw_tmp,lr,model.dw,lr*l2_param);
            // db_tmp = TensorTransforms::LinearCombination(db_tmp,lr,model.db,lr*l2_param);

            TensorTransforms::LinearCombination_(dw_tmp,lr,model.dw,lr*l2_param);
            TensorTransforms::LinearCombination_(db_tmp,lr,model.db,lr*l2_param);

            for(int l=0;l<model.layers.size();l++)
            {
                TensorTransforms::Add(model.layers[l].weights,dw_tmp[l],-1);
                TensorTransforms::Add(model.layers[l].biases,db_tmp[l],-1);
            }

            TensorTransforms::fill_with_zeros(model.dw);
            TensorTransforms::fill_with_zeros(model.db);

        }

};

class Adam : public Optimiser
{
    public:

        //algorithm parameters
        double beta1;
        double beta2;
        double epsilon;
        int update_count;

        //algorithm state tensors
        vector<vector<vector<double>>> v_w,m_w;
        vector<vector<double>> v_b,m_b;

        Adam(GNN &m, double learning_rate, double l2_param,double bet1 = 0.9, double bet2 = 0.999, double epsi = 1e-8) : Optimiser(m,learning_rate,l2_param), v_w(model.dw), v_b(model.db), m_w(model.dw), m_b(model.db)
        {
            beta1 = bet1;
            beta2 = bet2;
            epsilon = epsi;
            
            TensorTransforms::fill_with_zeros(v_w);
            TensorTransforms::fill_with_zeros(v_b);
            TensorTransforms::fill_with_zeros(m_w);
            TensorTransforms::fill_with_zeros(m_b);
        }


        // Function to implemet the Adam [ADAptive Moments] algorithm.
       void step()
        {
            
            update_count++;
            
            auto dw_tmp = model.dw;
            auto db_tmp = model.db;

            TensorTransforms::Matrix_square(dw_tmp);
            TensorTransforms::Matrix_square(db_tmp);
            
            // m_w = TensorTransforms::LinearCombination(m_w,beta1,model.dw,1-beta1);
            // m_b = TensorTransforms::LinearCombination(m_b,beta1,model.db,1-beta1);
            
            // v_w = TensorTransforms::LinearCombination(v_w,beta2,dw_tmp,1-beta2);
            // v_b = TensorTransforms::LinearCombination(v_b,beta2,db_tmp,1-beta2);

            TensorTransforms::LinearCombination_(m_w,beta1,model.dw,1-beta1);
            TensorTransforms::LinearCombination_(m_b,beta1,model.db,1-beta1);
            
            TensorTransforms::LinearCombination_(v_w,beta2,dw_tmp,1-beta2);
            TensorTransforms::LinearCombination_(v_b,beta2,db_tmp,1-beta2);

            auto mw_hat = m_w;
            auto mb_hat = m_b;
            auto vw_hat = v_w;
            auto vb_hat = v_b;

            TensorTransforms::Scale(mw_hat,1-pow(beta1,update_count));
            TensorTransforms::Scale(mb_hat,1-pow(beta1,update_count));
            TensorTransforms::Scale(vw_hat,1-pow(beta2,update_count));
            TensorTransforms::Scale(vb_hat,1-pow(beta2,update_count));
            
            auto vw_denominator_hat = vw_hat;
            auto vb_denominator_hat = vb_hat;

            TensorTransforms::Matrix_sqrt(vw_denominator_hat);
            TensorTransforms::Matrix_sqrt(vb_denominator_hat);

            TensorTransforms::Add(vw_denominator_hat,epsilon);
            TensorTransforms::Add(vb_denominator_hat,epsilon);

            dw_tmp = mw_hat;
            db_tmp = mb_hat;

            TensorTransforms::Matrix_divide(dw_tmp,vw_denominator_hat);
            TensorTransforms::Matrix_divide(db_tmp,vb_denominator_hat);

            // dw_tmp = TensorTransforms::LinearCombination(dw_tmp,lr,model.dw,lr*l2_param);
            // db_tmp = TensorTransforms::LinearCombination(db_tmp,lr,model.db,lr*l2_param);

            TensorTransforms::LinearCombination_(dw_tmp,lr,model.dw,lr*l2_param);
            TensorTransforms::LinearCombination_(db_tmp,lr,model.db,lr*l2_param);

            for(int l=0;l<model.layers.size();l++)
            {
                TensorTransforms::Add(model.layers[l].weights,dw_tmp[l],-1);
                TensorTransforms::Add(model.layers[l].biases,db_tmp[l],-1);
            }

            TensorTransforms::fill_with_zeros(model.dw);
            TensorTransforms::fill_with_zeros(model.db);

        }

};

void GNN::optimiser_step()
{
    optimiser->step();
}

void GNN::displayEpochStats()
{
    optimiser->displayEpochStats();
}

void GNN::testModel()
{
    optimiser->evaluateModel("Test");
}

void GNN::evaluateModel()
{
    optimiser->evaluateModel("Test");
}

void GNN::setOptimiser(char * optimiser_type,double lr, double l2_param)
{
    string optim_type(optimiser_type);
    // Convert to lowercase
    std::transform(optim_type.begin(), optim_type.end(), optim_type.begin(),
                   [](unsigned char c){ return tolower(c); });

    if(optim_type == "sgd")
       optimiser = new SGD(*this,lr,l2_param);
    else if(optim_type == "momentum")
        optimiser = new MomentumGD(*this,lr,l2_param);
    else if(optim_type == "rmsprop")
        optimiser = new RMSprop(*this,lr,l2_param);
    else if(optim_type == "adam")
        optimiser = new Adam(*this,lr,l2_param);
    else
    {
        cout<<"Invalid Optimiser Type. Choose among SGD, Momentum, RMSProp and Adam (case insensitive)..."<<endl;
        exit(0);
    }
}