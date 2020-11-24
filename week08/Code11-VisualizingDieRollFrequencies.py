#!/usr/bin/env python3
import matplotlib.pyplot as plt
import numpy as np
import random
import seaborn as sns

rolls = []
for i in range(600):
    rolls.append(random.randrange(1, 7))

# values and frequencies are ndarrays here and not lists.
# ndarray behaves like list but has a better performance
values, frequencies = np.unique(rolls, return_counts=True)
#print(values)
#print(frequencies)

# Create the initial bar plot
# The comma(,) format specifier displays the numbers with
# thousands separators.
title = f'Rolling a Six-Sided Die {len(rolls):,} Times'
sns.set_style('whitegrid')
axes = sns.barplot(x=values, y=frequencies, palette='bright')

# Setting the window title and labeling the x- and y- axes
axes.set_title(title)
axes.set(xlabel='Die Value', ylabel='Frequency')

# Finalizing the bar plot
axes.set_ylim(top=max(frequencies) * 1.10)
for bar, frequency in zip(axes.patches, frequencies):
    text_x = bar.get_x() + bar.get_width() / 2.0
    text_y = bar.get_height()
    text = f'{frequency:,}\n{frequency / len(rolls):.3%}'
    axes.text(text_x, text_y, text,
              fontsize=11, ha='center', va='bottom')

plt.show()
