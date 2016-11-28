//
//  AuthcodeView.h
//  pictureSure
//
//  Created by zsgjs on 16/8/15.
//  Copyright © 2016年 zsgjs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AuthcodeView : UIView

@property (nonatomic,strong) NSArray *dataArray;//字符素材数组

@property (nonatomic,strong) NSMutableString *authCodeStr;//验证码字符串

@end
