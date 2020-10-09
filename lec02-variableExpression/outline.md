# lec02 :  Variable/Operator/Assignment-Expression

### by ZHAO Jing  [zj@wetburing.com]

## 1. Expression ：

### DataType
- bit位   和 byte字节
- 整型 char/byte->short->int->long long
- 浮点型 float->double

### Constant
- 'a' 1 1LL 
- 0.5f 0.5  +0.21e+8
- 0xff;0123;

### Variable declare
- ``` int x;```
- ``` int x,y,z;```
- ``` int x,y=3;```
### Arithmetic operator
- 加 ```+```
- 减  ```-```
- 乘 ```*```
- 除  ```/```    
- 模 ```%```
### Assignment Expression
- Basic Assignment 基本赋值```=``` 

- Compound Assignment复合赋值 ```op=```

    ```
  A compound assignment expression of the form E1 op= E2 is equivalent to E1 = (T)((E1) op (E2)), where T is the type of E1, except that E1 is evaluated only once.
  ```

  

## 2. Math and Formated Output 

### 数学库Math  ```#include<cmath>```

#### 常数: PI/E

####指数和幂 exp/pow/sqrt/log/log10

####三角函数  sin/cos/tan/cot

####取整函数 ceil/floor/round
#### 其他  abs/fabs/hypot

###3 格式化输出
#### 整数的格式化输出
- 基本进制hex dec oct
- 定宽
- 填充
#### 小数的定点输出
- 精度

- 
