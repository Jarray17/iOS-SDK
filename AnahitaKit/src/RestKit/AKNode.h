//
//  AKNode.h
//  Pods
//
//  Created by Arash  Sanieyan on 2013-01-12.
//
//

#import "AKEntity.h"

@interface AKNode : AKEntity

/**
 @method
 
 @abstract
*/
+ (instancetype)withID:(int)nodeID;

@property (nonatomic, copy) NSString *nodeID;

@end


@interface AKPerson : AKNode

/** @abstract */
@property (nonatomic, copy) NSString *name;

/** @abstract */
@property (nonatomic, copy) NSString *body;

@end
