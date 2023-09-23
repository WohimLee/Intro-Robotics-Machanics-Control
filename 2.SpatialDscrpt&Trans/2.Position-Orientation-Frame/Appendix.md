&emsp;
# Appendix
## 1 Vector
>Dot Product 内积
- 点乘的结果表示 $\vec{a}$ 在 $\vec{b}$ 方向上的投影与 $\vec{b}$ 的乘积，反映了两个向量在方向上的相似度，结果越大越相似。
- 基于结果可以判断这两个向量是否是同一方向，是否正交垂直，具体对应关系为：
    - $\vec{a}\cdot \vec{b} > 0$: 方向基本相同，夹角在 $0°$ 到 $90°$ 之间
    - $\vec{a}\cdot \vec{b} = 0$: 正交，相互垂直
    - $\vec{a}\cdot \vec{b} < 0$: 方向基本相反，夹角在 $90°$ 到 $180°$ 之间
- $\vec{a}\cdot \vec{b} = \vec{b}\cdot \vec{a} = |\vec{a}|\cdot|\vec{b}| \cdot cos \alpha$

&emsp;
>Cross Product 外积
- $\vec{a}\times \vec{b} = |\vec{a}|\cdot|\vec{b}| \cdot sin \alpha$
- $\vec{a}\times \vec{b} = -\vec{b}\times \vec{a} $




&emsp;
## 2 Matrix
$(A+B)^T = A^T + B^T$

$(AB)^T = B^TA^T$

$R=[X, Y, Z] = \begin{bmatrix}
r_{11} & r_{12} & r_{13} \\
r_{21} & r_{22} & r_{23} \\
r_{31} & r_{32} & r_{33} \end{bmatrix}，R^T = [X^T, Y^T, Z^T]^T $


