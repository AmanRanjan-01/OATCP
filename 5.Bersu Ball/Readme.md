1. Let's sort boys and girls by skill.
2. If boy with lowest skill can be matched, it is good idea to match him.
3. It can't reduce answer size. 
4. Use girl with lowest skill to match.
5. The idea here implemented using recursion by travelling and checking if the girl or boy with index i and j can match or not.
6. Then a 2d dp is used to store the previous found pairs,so that we dont check it again.