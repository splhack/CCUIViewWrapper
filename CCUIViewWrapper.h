/* 
 * CCUIViewWrapper
 * http://www.cocos2d-iphone.org/forum/topic/6889
 *
 * Copyright (C) 2010 Blue Ether
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the 'cocos2d for iPhone' license.
 *
 * You will find a copy of this license within the cocos2d for iPhone
 * distribution inside the "LICENSE" file.
 *
 */

#import "cocos2d.h"

@interface CCUIViewWrapper : CCSprite
{
	UIView *uiItem;
	float rotation;
}

@property (nonatomic, retain) UIView *uiItem;

+ (id)wrapperForUIView:(UIView*)ui;
- (id)initForUIView:(UIView*)ui;

- (void)updateUIViewTransform;

@end
