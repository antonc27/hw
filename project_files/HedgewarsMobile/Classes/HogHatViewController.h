/*
 * Hedgewars-iOS, a Hedgewars port for iOS devices
 * Copyright (c) 2009-2012 Vittorio Giovara <vittorio.giovara@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA.
 */


#import <UIKit/UIKit.h>


@interface HogHatViewController : UITableViewController {
    NSDictionary *teamDictionary;
    NSInteger selectedHog;

    NSArray *hatArray;
    UIImage *normalHogSprite;
}

@property (nonatomic, strong) NSDictionary *teamDictionary;
@property (nonatomic) NSInteger selectedHog;
@property (nonatomic, strong) NSArray *hatArray;
@property (nonatomic, strong) UIImage *normalHogSprite;

@end
