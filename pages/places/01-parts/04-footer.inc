<footer class="footer">
    <div class="searchbox-mobile">
        <form>
            <input type="text" placeholder="Search..." required>
            <input type="button" class="search-btn" value="Search">
        </form>
    </div>
    <div class="footer-links">
        <ul>
            <li><h3>Tour Guide</h3></li>
            <li>
                    <div class="hover-tile-outer">
                        <div class="hover-tile-container" >
                            <div class="hover-tile hover-tile-visible" ></div>
                            <div class="hover-tile hover-tile-hidden">
                                <h4>Thank You!</h4>
                                <p></p>
                            </div>
                        </div>
                    </div>
            </li>
        </ul>
        <ul>
            <li><h3>Places</h3></li>
            <li><a href="/hawaii"><span>Hawaii</span></a></li>
            <li><a href="/boracay"><span>Boracay</span></a></li>
            <li><a href="/manila"><span>Manila</span></a></li>
        </ul>
        <ul>
            <li><h3>Content</h3></li>
            <li><a href="#">Travel Services</a></li>
            <li><a href="#">About Us</a></li>
            <li><a href="#">Contact Us</a></li>
        </ul>
        <ul>
            <li><h3>Follow Us</h3></li>
            <li><a href="javascript:void(0)">Facebook</a></li>
            <li><a href="javascript:void(0)">Twitter</a></li>
            <li><a href="javascript:void(0)">YouTube</a></li>
        </ul>

        <ul>
            <li><h3>Legal</h3></li>
            <li><a href="javascript:void(0)">Terms and Conditions</a></li>
            <li><a href="javascript:void(0)">Privacy Policy</a></li>
        </ul>

        <ul>
            <li><h3>Thanks to</h3></li>
            <li><a href="http://www.bigstockphotos.com" target="_blank" >Big Stock Photos</a></li>
            <li><a href="http://www.1001freefonts.com" target="_blank" >Google Fonts </a></li>
            <li><a href="https://scottjehl.github.io/picturefill/" target="_blank" >Picturefill.js</a></li>
        </ul>

    </div>

    <hr>
    <p>Copyright © 2017 / DGMD E-27 * A Student Project by Jai</p>

    <div class="box-container">
    <?php
        for( $i = 0; $i<10; $i++ ) {
            echo "<div class='box' id='box-".$i."'></div>";
        }
    ?>
    </div>
</footer>
