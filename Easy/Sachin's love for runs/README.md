<h2><a href="https://www.geeksforgeeks.org/problems/sachins-love-for-runs2217/1?page=12&category=Arrays,Strings&difficulty=Easy&sortBy=accuracy">Sachin's love for runs</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Sachin always wanted to score more and more runs for his team. Sometimes he succeeds in doing that and sometimes he fails. He also has a habit of noting down the runs he scored after&nbsp;every match in his diary. After <strong>N&nbsp;</strong>&nbsp;matches he always looks for his scores. In&nbsp;<strong>i-th</strong> match, he scores <strong>A[i]&nbsp;</strong>runs. Now he wanted to know the length of the&nbsp;maximum non-decreasing sub-segment in sequence <strong>A</strong>. As he wants to go for another&nbsp;match, help him in doing this task.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>                  
N = 6                       
A[] = {2, 2, 1, 3, 4, 1}
<strong>Output</strong>:
3
<strong>Explanation:</strong>
The maximum non-decreasing sub-segment is
the segment with numbers from the third to
the fifth one.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
A[] = {2, 2, 9}
<strong>Output:</strong>
3
<strong>Explanation:</strong>
The maximum non-decreasing sub-segment
is the numbers from the first to the third one.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>compute()</strong>&nbsp;which takes the array <strong>A[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and returns the length of the maximum non-decreasing sub-segment.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)<br>
<br>
<strong>Constraints:</strong><br>
1 ≤ N ≤10<sup>5</sup><br>
1 ≤ A[i] ≤ 10<sup>9</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;