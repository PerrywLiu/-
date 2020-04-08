//
//  PMNode.h
//  PMLinkList
//
//  Created by LiuPW on 2020/4/8.
//  Copyright © 2020 LiuPW. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PMNode : NSObject

@property (nonatomic, nullable, strong) id value;
@property (nonatomic, nullable, strong) PMNode *next;

- (instancetype)initWithElement:(id)element nextPtr:(PMNode*)next;

@end

NS_ASSUME_NONNULL_END
