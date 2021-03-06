//
//  OSPMapCSSStyleSheet.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 05/11/2011.
//  Copyright (c) 2011 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OSPMapCSSRuleset.h"

#import "OSPAPIObject.h"

@interface OSPMapCSSStyleSheet : NSObject

@property (readwrite, strong) OSPMapCSSRuleset *ruleset;

- (id)initWithRules:(OSPMapCSSRuleset *)ruleset;

- (NSArray *)styledObjects:(NSSet *)objects;
- (NSDictionary *)styleForCanvas;

@end
