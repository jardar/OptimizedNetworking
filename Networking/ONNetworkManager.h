//
//  ONNetworkManager.h
//  OptimizedNetworking
//
//  Created by Brennan Stehling on 7/10/12.
//  Copyright (c) 2012 SmallSharpTools LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ONNetworkOperation.h"
#import "ONDownloadItem.h"

#define ON_SYNTHESIZE_SINGLETON_FOR_HEADER(classname) \
+ (classname *)sharedInstance;

@interface ONNetworkManager : NSObject

ON_SYNTHESIZE_SINGLETON_FOR_HEADER(ONNetworkManager);

- (void)setMaxConcurrentOperationCount:(NSInteger)maxCount;
- (void)addOperations:(NSArray *)operations;
- (void)addOperation:(ONNetworkOperation *)operation;
- (void)cancelOperation:(ONNetworkOperation *)operation;
- (void)cancelOperationsWithCategory:(NSString *)category;
- (void)cancelAll;

- (void)logOperations;

+ (NSArray *)sortOperations:(NSArray *)operations;

- (void)didStartNetworking;
- (void)didStopNetworking;

- (NSUInteger)operationsCount;

@end
