//
//  NSString+Ext.h
//  centanet
//
//  Created by Ranger on 16/8/8.
//  Copyright © 2016年 Centaline. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <UIKit/UIKit.h>


@interface NSString (Ext)

#pragma mark-  字符串高度宽度的计算
/**求取一般字符串高度**/
-(CGFloat)getStringHeight:(UIFont*)font width:(CGFloat)width;

/**求取一般字符串宽度**/
-(CGFloat)getStringWidth:(UIFont*)font Height:(CGFloat)height;

/**求取特殊字符串高度**/
-(CGFloat)mutableAttributedStringWithFont:(UIFont *)font
                                    width:(CGFloat)width
                             andLineSpace:(CGFloat)lineSpace;



- (BOOL)hasSerialNumber:(NSUInteger)num;
- (BOOL)isPureInt;
- (BOOL)matchBlankSpace;

/** 判断国家码 */
- (BOOL)isValidMobliePhoneCountryCode;
/** 判断邮箱 */
- (BOOL)isValidEmailCode;
/** 判断区号 */
- (BOOL)isValidTelephoneAreaCode;
/** 判断手机号 */
- (BOOL)isValidMobilePhoneCode;
/** 判断国外手机 */
- (BOOL)isValidMobilePhoneForiCode;

/** 是否是固定电话 */
- (BOOL)isValidFixedTelephone;
/** 国外固话 */
- (BOOL)isValidFixedForiTelephone;

/** md5加密 */
+ (NSString *)getMd5Code:(NSString *)md5Code;

/** 字符串unicode编码 */
+(NSString *) utf8ToUnicode:(NSString *)string;

@end
