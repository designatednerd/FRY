//
//  FRYTypist.h
//  FRY
//
//  Created by Brian King on 11/9/14.
//  Copyright (c) 2014 Raizlabs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FRYTypist : NSObject

+ (NSPredicate *)privateKeyboardPredicate;

- (id)initWithPrivateKeyboard:(UIView *)keyboard;

- (void)typeString:(NSString *)string;

@end
