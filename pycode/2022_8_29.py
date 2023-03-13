# -*- coding: utf-8 -*-
"""
Created on Mon Aug 29 21:52:36 2022

@author: 15359
"""

# print('Hola,amigo！\nEI Pueblo Unido')
'''
sum = 0
x,y,z = input('input the number x, y, z');
sum = x + y + z
re = sum / 3.0
print('The average of x, y, z: ', re)
'''

import math

# 用户输入数字
num1 = input('输入第一个数字：')
num2 = input('输入第二个数字：')
 
# 求和
sum = float(num1) + float(num2)
 
# 显示计算结果
print('数字 {0} 和 {1} 相加结果为： {2}'.format(num1, num2, sum))