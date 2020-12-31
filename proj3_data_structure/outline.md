# 基础数据结构
## 栈 Stack FILO (First In Last Out)
```$xslt
int data[1000],top=-1;//data[0:top]= {}
```
   - 初始化 top=-1
   - 入栈 data[++top]=x
   - 出栈 --top;
   - 查询栈顶元素 data[top]
   - 判断栈的容量 top+1
   - 判断是否是空栈 top==-1 (~top)
   
## 队列 Queue FIFO (First In First Out)
```$xslt
int data[1000],head=0,tail=-1;//data[head:tail]={}
```
   - 初始化 ```head=0 tail=-1```
   - 入队 ```data[++tail]=x```
   - 出队 ```++head;```
   - 查询队首元素 ```data[head]```
   - 判断容量 ```tail-head+1```
   - 判断是否是空队```head>tail``` 
- 双端队列
