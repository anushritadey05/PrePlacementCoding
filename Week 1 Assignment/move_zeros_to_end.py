#Move all zeros to end

array=list(map(int,input("Enter the elements:").split()))
non_zero=[s for s in array if s!=0]
zero_count=array.count(0)
result=non_zero+[0]*zero_count
print("The result is:",result)