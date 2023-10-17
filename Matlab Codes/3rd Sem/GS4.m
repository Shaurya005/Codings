clear all
clc
nsamples = 5;
npoints = 50;
for k = 1:nsamples
    iterationString = ['Iteration #',int2str(k)];
    disp(iterationString)
    currentData = rand(npoints,1);
    sampleMean(k) = mean(currentData)
end
overallMean = mean(sampleMean)

if overallMean < .49
   disp('Mean is less than expected')
elseif overallMean > .51
   disp('Mean is greater than expected')
else
   disp('Mean is within the expected range')
end



doc mean %Opens new window in help's separate window
help mean %View an abbreviated text version of function documents in the Command Window 