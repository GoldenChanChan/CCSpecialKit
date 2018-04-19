//
//  Target_Special.h
//  CCSpecialKit
//
//  Created by 陈成 on 2018/4/19.
//

#import <Foundation/Foundation.h>
#import "CCSpecialKit.h"
@interface Target_Special : NSObject
- (UIViewController*)Action_specialDetailViewController:(NSDictionary*)params;

- (NSDictionary*)Action_specialReformerWithOriginData:(NSDictionary*)params;

- (NSDictionary *)Action_specialReformer:(NSDictionary*)params;

- (APIRequest*)Action_specialAPIRequest:(NSDictionary*)params;

@end
