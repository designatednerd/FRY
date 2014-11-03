//
//  NSObject+FRYLookupSupport.h
//  FRY
//
//  Created by Brian King on 10/8/14.
//  Copyright (c) 2014 Raizlabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FRYDefines.h"

OBJC_EXTERN NSString* const kFRYLookupAccessibilityIdentifier;
OBJC_EXTERN NSString* const kFRYLookupAccessibilityLabel;
OBJC_EXTERN NSString* const kFRYLookupAccessibilityValue;
OBJC_EXTERN NSString* const kFRYLookupAccessibilityTrait;

@interface NSObject(FRYLookupSupport)

- (void)fry_enumerateDepthFirstViewMatching:(NSPredicate *)predicate usingBlock:(FRYFirstMatchBlock)block;
- (void)fry_enumerateAllViewsMatching:(NSPredicate *)predicate usingBlock:(FRYFirstMatchBlock)block;
- (BOOL)fry_hasSubviewViewMatching:(NSPredicate *)predicate;

@end
