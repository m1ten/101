# mathematical model on innovations in engineering based on the number of engineers

import numpy as np
import matplotlib.pyplot as plt

e = int(input('Enter the number of engineers: '))
r = float(input('Enter the rate of innovation (decimal): '))

# get the distribution curve of engineers and rate of innovation (at 10% success rate)
def get_distribution_curve(engineers, rate):
    innovation = np.random.binomial(engineers, rate)

    print('Innovations: ', innovation)

    # get the distribution curve
    distribution = np.random.binomial(engineers, rate, 1000)

    # plot the distribution curve
    plt.hist(distribution, bins=100, color='g')
    plt.xlabel('Innovation')
    plt.ylabel('Frequency (out of 1000)')
    plt.show()

    # what percent of engineers are innovators?
    innovators = (innovation / engineers) * 100 
    print('Innovators: ', innovators, '%')

    # what percent of engineers are innovators based on the distribution curve?
    innovation_mean = np.mean(distribution)
    innovators_mean = (innovation_mean / engineers) * 100
    print('Innovators (based on distribution curve): ', innovators_mean, '%') 

get_distribution_curve(e, r)